#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << x << endl
#define REP(i,n) for(Long i = 0; i < (Long)n; i++)
#define pb push_back
using namespace std;

typedef long long Long;

const Long MAX = 40;

Long columnaElegida[MAX]; // Para todo f del 1 al n , las reinas estar�n en la posici�n (f , columnaElegida[f])
bool usadoColumna[MAX];
bool usadoDiagonal1[2 * MAX];
bool usadoDiagonal2[2 * MAX];

Long n;

void imprimirTablero() {
	for(Long i = 0; i < n; i++) {
		for(Long j = 0; j < n; j++) {
			if(columnaElegida[i] == j) {
				cout << "1 ";
			} else {
				cout << "0 ";
			}
		}
		cout << endl;
	}
}

bool esValido(Long fila, Long columna) {
	if(usadoColumna[columna]) {
		return false;
	}
	
	if(usadoDiagonal1[fila - columna + n]) {
		return false;
	}
	
	if(usadoDiagonal2[fila + columna]) {
		return false;
	}
	
	return true;
}

void colocarReina(Long fila, Long columna) {
	columnaElegida[fila] = columna;
	usadoColumna[columna] = true;
	usadoDiagonal1[fila - columna + n] = true;
	usadoDiagonal2[fila + columna] = true;
}

void quitarReina(Long fila, Long columna) {
	columnaElegida[fila] = -1; 
	usadoColumna[columna] = false;
	usadoDiagonal1[fila - columna + n] = false;
	usadoDiagonal2[fila + columna] = false;
}

bool solve(Long fila) { // O(N!)
	if(fila == n) {
		imprimirTablero();
		return true;
	}
	
	for(Long columna = 0; columna < n; columna++) {
		//en cada fila tengo que elegir en que columna poner la reina
		if(esValido(fila, columna)) {
			colocarReina(fila, columna);
			if(solve(fila + 1)) {
				return true;
			}
			quitarReina(fila, columna);
		}
	}
	
	return false;
	
}

void inicializar() {
	for(Long i = 0; i < n; i++) {
		columnaElegida[i] = -1;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n;
	
	inicializar();
	
	if(!solve(0)) {
		cout << "No hay solucion" << endl;
	}
	return 0;
}


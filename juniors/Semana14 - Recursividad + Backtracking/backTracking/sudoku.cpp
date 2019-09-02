#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << x << endl
#define REP(i,n) for(Long i = 0; i < (Long)n; i++)
#define pb push_back
using namespace std;

typedef long long Long;

Long A[9][9];
bool usadoFila[9][10];
bool usadoColumna[9][10];
bool usadoBloque[3][3][10];

Long vacio = 0;

bool esValido(Long fila, Long columna, Long num) {
	if(usadoFila[fila][num] || usadoColumna[columna][num] || usadoBloque[fila / 3][columna / 3][num]) {
		return false;
	}
	
	return true;
}

void colocar(Long fila, Long columna, Long num) {
	A[fila][columna] = num;
	usadoFila[fila][num] = true;
	usadoColumna[columna][num] = true;
	usadoBloque[fila / 3][columna / 3][num] = true;
}

void quitar(Long fila, Long columna) {
	Long num = A[fila][columna]; //lo que hay en ese momento en esa celda
	A[fila][columna] = vacio;
	usadoFila[fila][num] = false;
	usadoColumna[columna][num] = false;
	usadoBloque[fila / 3][columna / 3][num] = false;
}

void imprimirTablero() {

	for(Long i = 0; i < 9; i++) {
		if(i % 3 == 0) {
			cout << "   _ _ _ _ _ _ _ _ _ _ _ _" << endl << endl;	
		}
		for(Long j = 0; j < 9; j++) {
			if(j % 3 == 0) {
				cout << " | ";
			}
			if(A[i][j] == vacio) {
				cout << "* "; 
			} else {
				cout << A[i][j] << " ";
			}
		}
		cout << " | " << endl;
	
	}
	cout << "   _ _ _ _ _ _ _ _ _ _ _ _" << endl << endl;
}

bool sudoku(Long fila, Long columna) { //O( N! ^ N) , para este caso N = 9
	if(fila == 9) {
		imprimirTablero();
		return true;
	}
	if(columna == 9) {
		return sudoku(fila + 1 , 0);
	}
	
	if(A[fila][columna] != vacio) {
		return sudoku(fila , columna + 1);
	}
	
	for(Long num = 1; num <= 9; num++) {
		if(esValido(fila, columna, num)) {
			colocar(fila, columna, num);
			if(sudoku(fila, columna + 1)) {
				return true;
			}
			quitar(fila, columna);
		}
	}
	
	return false;
}

void inicializar() {
	for(Long i = 0; i < 9; i++) {
		for(Long j = 0; j < 9; j++) {
			A[i][j] = vacio; //inicilizar el arreglo en 0 (ningun numero)
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	//sudoku cl�sico de 9 bloques de 3 x 3
	
	inicializar();
	
	Long celdas; //celdas con numeros;
	cin >> celdas;
	
	for(Long t = 0; t < celdas; t++) {
		Long fila, columna , num;
		cin >> fila >> columna >> num;
		colocar(fila, columna, num);
	}
	
	cout << "INICIAL = "  << endl;
	imprimirTablero();
	
	cout << "FINAL = " << endl;
	if(!sudoku(0 , 0)) {
		cout << "NO HAY SOLUCION" << endl;
	}
	return 0;
}


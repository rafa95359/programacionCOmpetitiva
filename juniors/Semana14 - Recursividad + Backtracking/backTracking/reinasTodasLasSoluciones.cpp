#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
using namespace std;

typedef long long Long;

const Long MAX = 40;
bool nega[MAX][MAX];
Long columnaElegida[MAX];
bool usadoColumna[MAX];
bool usadoDiagonal1[2 * MAX];
bool usadoDiagonal2[2 * MAX];

Long n;
Long contador=0;
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
	cout << "------------------------------" << endl << endl;
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

void solve(Long fila) { // O(N!)
	if(fila == n) {	
		contador++;
		return;
	}
	
	for(Long columna = 0; columna < n; columna++) {
		//en cada fila tengo que elegir en que columna poner la reina
		if(esValido(fila, columna) && !nega[fila][columna]) {
			colocarReina(fila, columna);
			solve(fila + 1);
			quitarReina(fila, columna);
		}
	}
	
}

void inicializar() {
	contador=0;
	para(i,0,n){
		usadoColumna[i]=false;		
	}
	para(i,0,2*n+1){
		usadoDiagonal1[i]=false;
		usadoDiagonal2[i]=false;
	}
	para(i,0,n){
			para(j,0,n){
				nega[i][j]=false;
			}
		}
	for(Long i = 0; i < n; i++) {
		columnaElegida[i] = -1;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	Long indice=1;
	while(cin>>n,n){
		inicializar();	
		para(i,0,n){
			para(j,0,n){
				char aux;
				cin>>aux;
				if(aux=='*')nega[i][j]=true;
			}
		}
		solve(0);
		cout<<"Case "<<indice<<": "<<contador<<endl;
		indice++;
	}
	
	

	return 0;
}


#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)

using namespace std;

typedef long long Long;

Long A[4][4];
bool usadoFila[4][5];
bool usadoColumna[4][5];
bool usadoBloque[2][2][5];

Long vacio = 0;

bool esValido(Long fila, Long columna, Long num) {
	if(usadoFila[fila][num] || usadoColumna[columna][num] || usadoBloque[fila / 2][columna / 2][num]) {
		return false;
	}
	
	return true;
}

void colocar(Long fila, Long columna, Long num) {
	A[fila][columna] = num;
	usadoFila[fila][num] = true;
	usadoColumna[columna][num] = true;
	usadoBloque[fila / 2][columna / 2][num] = true;
}

void quitar(Long fila, Long columna) {
	Long num = A[fila][columna]; //lo que hay en ese momento en esa celda
	A[fila][columna] = vacio;
	usadoFila[fila][num] = false;
	usadoColumna[columna][num] = false;
	usadoBloque[fila / 2][columna / 2][num] = false;
}

void imprimirTablero() {
    para(i,0,4){
        para(j,0,4){
            cout<<A[i][j]<<"";
        }
        cout<<endl;
    }

	
}

bool sudoku(Long fila, Long columna) { //O( N! ^ N) , para este caso N = 9
	if(fila == 4) {
		imprimirTablero();
		return true;
	}
	if(columna ==4) {
		return sudoku(fila + 1 , 0);
	}
	
	if(A[fila][columna] != vacio) {
		return sudoku(fila , columna + 1);
	}
	
	for(Long num = 1; num <= 4; num++) {
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
    para(i,0,4){
        para(j,0,4){
            A[i][j]=vacio;
        }
    }
    para(i,0,4){
        para(j,0,5){
            usadoFila[i][j]=false;
            usadoColumna[i][j]=false;
        }
    }
    para(i,0,2){
        para(j,0,2){
            para(k,0,5){
                usadoBloque[i][j][k]=false;
            }
        }
    }
    
	
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	
	
	
	inicializar();

    Long t;
    cin>>t;

	para(i,0,t){
        inicializar();
	    para(j,0,4){
            para(k,0,4){
                char aux;
                cin>>aux;
                if(aux!='*'){
                    colocar(j,k,aux-'0');                    
                }
            }
        }
    
	      
	    cout << "Case #"<<i+1 <<":"<< endl;
	    if(!sudoku(0 , 0)) {
	    	cout << "NO HAY SOLUCION" << endl;
	    }
    }
	return 0;
}


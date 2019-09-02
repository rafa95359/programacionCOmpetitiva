#include <bits/stdc++.h>

using namespace std;

typedef long long Long;

// arreglo ind[r] almacena la ultima posicion del estudiante con rating "r"
// al declararlo en global, el arreglo es inicializado en 0
Long ind[101];

int main() {
    Long n, x, k;
	cin >> n >> k;
	for(Long i = 1; i <= n; i++){
		cin >> x;
		// almacena la posicion del estudiante de rating x
		ind[x] = i;
	}
	
	// se contabiliza la cantidad de estudiantes con rating distintos
	Long con = 0;
	for(Long i = 0; i <= 100; i++){
		if(ind[i] != 0){
			con++;
		}
	}
	// si la cantidad de rating es mayor o igual a k se puede formar el equipo
	if(con < k){
		cout << "NO" << endl;
	}else{
		// como en se permite imprimir los indicies de los "k" estudiantes en cualquier orden
		// basta con tener la posicion del ultimo alumno con rating "i"
		cout << "YES" << endl;
		for(Long i = 0; i <= 100; i++){
			// validamos que el rating i tenga almenos un estudiante ind[i] != 0
			// validamos que k sea mayor que 0, que indica que aun falta imprimir k estudiantes
			if(ind[i] != 0 && k > 0){
				cout << ind[i] << " ";
				k--;
				// se disminuye k para indicar que ya se imprimio un estudiante con rating i
			}
		}
		cout << endl;
	}
	return 0;
}

#include <bits/stdc++.h>

using namespace std;

typedef long long Long;

int main() {
    Long n;
	cin >> n;
	string s;
	cin >> s;
	Long res = 0;
	// se lee la cadena desde i = 0 hasta i = n-3, para que en laposicion n-3 validar "xxx" en la posicion n-3,n-2,n-1
	// porque si el utimo y fuese n-1, estaria accediendo a una memoria invalida n y n-2
	for(Long i = 0; i <= n-3; i++){
		// se valida que los 3 caracteres consecutivos formen "xxx", aumentando mi respuesta en 1
		if(s[i] == 'x' && s[i+1] == 'x' && s[i+2] == 'x'){
			res++;
		}
	}
	cout << res << endl;
	return 0;
}

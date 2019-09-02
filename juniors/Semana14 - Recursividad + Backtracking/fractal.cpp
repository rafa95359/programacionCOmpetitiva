#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << x << endl
#define REP(i,n) for(Long i = 0; i < (Long)n; i++)
#define pb push_back

using namespace std;

typedef long long Long;

char M[3000][3000];

Long pow2(Long n) {
	//2 ^ n
	return (1LL << n);
}

void dibujarFractal(Long n , Long filas, Long columnas) {
	
	if(n == 1) {
		M[filas][columnas] = '/';
		M[filas][columnas + 1] = '_';
		M[filas][columnas + 2] = '_';
		M[filas][columnas + 3] = '\\';
		M[filas - 1][columnas + 1] = '/';
		M[filas - 1][columnas + 2] = '\\';
		return;
	}
	
	dibujarFractal(n - 1 , filas , columnas);
	dibujarFractal(n - 1 , filas , columnas + pow2(n) );
	dibujarFractal(n - 1 , filas - pow2(n - 1), columnas + pow2(n - 1) );
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Long n;
	cin >> n;
	
	//freopen("fractal.txt", "w", stdout);
	Long filas = pow2(n);
	Long columnas = pow2(n + 1);
	dibujarFractal(n , filas - 1, 0);
	
	for(Long i = 0; i < filas; i++) {
		for(Long j = 0; j < columnas; j++) {
			cout << M[i][j];
		}
		cout << endl;
	}
	
	return 0;
}




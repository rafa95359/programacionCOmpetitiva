#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << x << endl
#define REP(i,n) for(Long i = 0; i < (Long)n; i++)
#define pb push_back

using namespace std;

typedef long long Long;

const Long MAX = 1000;
Long A[MAX][MAX];

Long n, m;

Long maxSum(Long fila , Long columna) {
	
	if(fila == n - 1 && columna == m - 1) {
		//ultima celda
		return A[fila][columna];
	}
	
	if(fila == n - 1) {
		return A[fila][columna] + maxSum(fila, columna + 1);
	}
	
	if(columna == m - 1) {
		return A[fila][columna] + maxSum(fila + 1 , columna);
	}


	Long maxi = max(maxSum(fila + 1 , columna) , maxSum(fila, columna + 1));
	
	return maxi + A[fila][columna];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	cin >> n >> m;
	
	for(Long i = 0; i < n; i++) {
		for(Long j = 0; j < m; j++) {
			cin >> A[i][j];
		}
	}
	
	cout << maxSum(0 , 0) << endl;
	return 0;
}




#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << x << endl
#define REP(i,n) for(Long i = 0; i < (Long)n; i++)
#define pb push_back

using namespace std;

typedef long long Long;

const Long MAX = 100;
Long A[MAX];

bool elegidos[MAX];

Long n;
bool encontrado = false;


void generarSuma(Long pos, Long suma ) { //O( 2 ^ n)
	
	if(suma < 0) {
		return;
	}
	
	if(encontrado) {
		return;
	}
	
	if(pos == n) {
		if(suma == 0) {
			encontrado = true;
			for(Long i = 0; i < n; i++) {
				if(elegidos[i]) {
					cout << A[i] << " + ";
				}
			}
			cout << endl;
		}
		return;
	}
	
	generarSuma(pos + 1 , suma );

	
	elegidos[pos] = true;
	generarSuma(pos + 1 , suma - A[pos] );
	elegidos[pos] = false;
	
	
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n;
	for(Long i = 0; i < n; i++) {
		cin >> A[i];
	}
	
	Long suma;
	cin >> suma;
	generarSuma(0 , suma );
	return 0;
}




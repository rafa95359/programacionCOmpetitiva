#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << x << endl
#define REP(i,n) for(Long i = 0; i < (Long)n; i++)
#define pb push_back
using namespace std;

typedef long long Long;

Long n;
Long sumaObjetivo;

const Long MAX = 100;
Long a[MAX];

vector<Long> v;

void generarSuma(Long pos , Long sumaAc  ) { //O(2 ^ n)
	
	
	
	//si los numeros son todos positivos
	
	/*if(sumaAc > sumaObjetivo){
		return;
	}*/
	
	if(pos == n){
		if(sumaAc == sumaObjetivo){
			for(Long i = 0; i < v.size(); i++){
				if(i != 0){
					cout << " + ";
				}
				cout << v[i];
			}
			cout << " = " << sumaObjetivo << endl;
		}
		return;
	}
	
	//probando
	v.push_back(a[pos]);
	generarSuma(pos + 1 , sumaAc + a[pos]  );
	//deshaciendo
	v.pop_back();
	
	generarSuma(pos + 1 , sumaAc);
	
}

/*
2
7 0
7
*/

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	for(Long i = 0; i < n; i++) {
		cin >> a[i];
	}	
	
	cin >> sumaObjetivo;
	
	generarSuma(0 , 0 );
	
	return 0;
}


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

void generarSuma(Long pos , Long sumaAc, vector<Long> &v  ) { //O(2 ^ n)
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
	generarSuma(pos + 1 , sumaAc + a[pos]  , v);
	//deshaciendo
	v.pop_back();
	
	generarSuma(pos + 1 , sumaAc, v);
	
}

/*
8
6 7 8 6 1 10 2 8
20
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
	
	vector<Long> vacio;
	Long cero = 0;
	generarSuma(0 , cero , vacio);
	
	return 0;
}

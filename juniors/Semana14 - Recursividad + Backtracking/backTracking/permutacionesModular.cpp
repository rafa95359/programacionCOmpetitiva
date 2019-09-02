#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << x << endl
#define REP(i,n) for(Long i = 0; i < (Long)n; i++)
#define pb push_back

using namespace std;

typedef long long Long;

Long respuesta[100];
bool used[100];

Long n;

bool esValido(Long num) {
	if(used[num]) {
		return false;
	} else {
		return true;
	}
}

void probar(Long pos , Long num) {
	respuesta[pos] = num;
	used[num] = true;
}

void quitar(Long pos) {
	Long num = respuesta[pos];
	respuesta[pos] = 0;
	used[num] = false;
}

void imprimir() {
	for(Long i = 0; i < n; i++) {
		cout << respuesta[i] << " ";
	}
	cout << endl;
}

void permutaciones(Long pos){

	if(pos == n){
		//caso base
		imprimir();
		return;
	}
	
	for(Long num = 1; num <= n; num++) {
		if(esValido(num)) {
			probar(pos , num);
			permutaciones(pos + 1);
			quitar(pos);
		}
	}
	
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n;
	permutaciones(0);
	
	return 0;
}


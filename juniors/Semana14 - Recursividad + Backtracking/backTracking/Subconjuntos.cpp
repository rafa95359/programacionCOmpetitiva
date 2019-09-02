#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << x << endl
#define REP(i,n) for(Long i = 0; i < (Long)n; i++)
#define pb push_back

using namespace std;

typedef long long Long;

Long respuesta[100];
Long n;
void Subconjuntos(Long lv){
	if(lv == n){
		for(Long i = 0; i < n; i++){
			cout << respuesta[i];
		}
		cout << endl;
		return;
	}
	for(Long i = 0; i <= 1; i++){
		respuesta[lv] = i;
		Subconjuntos(lv+1);
		
	}
	return;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	
	cin >> n;	
	Subconjuntos(0);
	return 0;
}




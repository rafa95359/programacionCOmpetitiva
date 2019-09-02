#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << x << endl
#define REP(i,n) for(Long i = 0; i < (Long)n; i++)
#define pb push_back

using namespace std;

typedef long long Long;

Long respuesta[100];
bool used[100];

void permutaciones(Long lv, Long n){
	if(lv == n){
		for(Long i = 0; i < n; i++){
			cout << respuesta[i];
		}
		cout << endl;
		return;
	}
	for(Long i = 1; i <= n; i++){
		if(!used[i]){
			used[i] = true;
			respuesta[lv] = i;
			permutaciones(lv+1,n);
			used[i] = false;
		}
	}
	return;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	
	Long n;
	cin >> n;

	permutaciones(0,n);
	return 0;
}


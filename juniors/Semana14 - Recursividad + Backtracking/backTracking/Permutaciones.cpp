#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << x << endl
#define REP(i,n) for(Long i = 0; i < (Long)n; i++)
#define pb push_back

using namespace std;

typedef long long Long;

void permutaciones(Long lv, Long n, vector<Long> respuesta, vector<bool> used){
	if(lv == n){
		for(auto dig : respuesta){
			cout << dig;
		}
		cout << endl;
		return;
	}
	for(Long i = 1; i <= n; i++){
		if(!used[i]){
			vector<Long> nueva_respuesta = respuesta;
			used[i] = true;
			nueva_respuesta.push_back(i);
			permutaciones(lv+1,n,nueva_respuesta,used);
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
	
	vector<Long> v;
	vector<bool> used(n+1);
	permutaciones(0,n,v,used);
	return 0;
}




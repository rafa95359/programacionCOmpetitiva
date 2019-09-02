x|xx|#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << x << endl
#define REP(i,n) for(Long i = 0; i < (Long)n; i++)
#define pb push_back

using namespace std;

typedef long long Long;

Long n, m;

void backtracking(Long lv, vector<Long> v){ //O( n * m ^ n)
	if(lv == n){
		for(Long x : v){
			cout << x;
		}
		cout << endl;
		return;
	}
	for(Long i = 1; i <= m; i++){
		vector<Long> aux = v;
		aux.push_back(i);
		backtracking(lv+1,aux);
	}
	return;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n >> m;
	vector<Long> v;
	backtracking(0,v);
	return 0;
}




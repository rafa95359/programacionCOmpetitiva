#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << x << endl
#define REP(i,n) for(Long i = 0; i < (Long)n; i++)
#define pb push_back

using namespace std;

typedef long long Long;

Long n, m;

vector<Long> v;

void backtracking(Long lv){ //0( m ^ n)
	if(lv == n){
		for(Long x : v){
			cout << x;
		}
		cout << endl;
		return;
	}
	for(Long i = 1; i <= m; i++){
		v[lv] = i;
		backtracking(lv+1);
	}
	return;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n >> m;
	
	v.resize(n);
	
	backtracking(0);
	return 0;
}




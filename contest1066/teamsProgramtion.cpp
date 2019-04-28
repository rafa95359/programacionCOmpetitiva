#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << x << endl
#define REP(i,n) for(Long i = 0; i < (Long)n; i++)
#define pb push_back
using namespace std;

typedef long long Long;

const Long MAX = 5000;
Long A[MAX];
map<Long, Long> cnt;

bool used[MAX][MAX];
Long dp[MAX][MAX];
Long n;

Long sum[MAX];
Long siguiente[MAX];

Long f(Long pos, Long team) {
	if(team <= 0) {
		return 0;
	} 
	if(pos >= n) {
		return 0;
	}
	Long &ans = dp[pos][team];
	if(used[pos][team]) {
		return ans;
	}
	used[pos][team] = true;
	
	ans = max(f(pos + 1 , team) , sum[pos] + f(siguiente[pos] , team - 1) );
	return ans;
} 


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	vector<Long> v;
	Long k;
	cin >> n >> k;
	REP(i , n) {
		cin >> A[i];
		cnt[A[i]]++;
		v.pb(A[i]);
	}
	sort(A, A + n);
	sort(v.begin(),v.end());
	
	REP(i , n) {
		Long aux = 0;
		for(Long p = 0; p <= 5; p++) {
			aux += cnt[A[i] + p];
		}
		sum[i] = aux;
		vector<Long>::iterator it = upper_bound(v.begin() , v.end() , A[i] + 5);
		siguiente[i] =  it - v.begin();
	}
	
	cout << f(0 , k) << endl;
	return 0;
}
#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << x << endl
#define REP(i,n) for(Long i = 0; i < (Long)n; i++)
#define pb push_back
using namespace std;

typedef long long Long;

Long n;
Long maxXor;
Long A[30];
void f(Long pos, Long xorAc, Long k) { //O(2^n)
	if(pos == n) {
		if(k == 0) {
			maxXor = max(maxXor, xorAc);
		}
			
		return;
	}
	
	f(pos + 1 ,xorAc xor A[pos] , k - 1);
	f(pos + 1 , xorAc, k );
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	Long t;
	cin >> t;
	REP(x , t) { //O (t * 2 ^ n)
		Long  k ;
		cin >> n >> k;
		maxXor = -1;
		REP(i , n) {
			cin >> A[i];
		}
		f(0 , 0, k);
		cout << maxXor << '\n';
	}
	return 0;
}

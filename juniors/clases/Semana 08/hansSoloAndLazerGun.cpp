#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << x << endl
#define pb push_back
using namespace std;

typedef long long Long;

set<pair<Long,Long> > s;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	Long n;
	cin >> n;
	Long x0,y0;
	cin >> x0 >> y0;
	
	for(Long i = 0; i < n; i++) {
		Long x,y;
		cin >> x >> y;
		Long den = x - x0;
		Long num = y - y0;
		pair<Long,Long> res;
		if(den == 0) {
			res = {1e9 , 1};
		} else {
			Long g = __gcd(num , den);
			num /= g;
			den /= g;
			res = {num, den};
		}
		s.insert(res);
	}
	cout << s.size() << endl;
	
	return 0;
}

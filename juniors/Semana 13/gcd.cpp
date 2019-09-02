#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << x << endl
#define REP(i,n) for(Long i = 0; i < (Long)n; i++)
#define pb push_back

using namespace std;

typedef long long Long;


Long gcd(Long a , Long b) {
	if(b == 0) {
		return a;
	}
	return gcd(b , a % b);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	Long a,b;
	cin >> a >> b;
	cout << gcd(a , b) << endl;

	return 0;
}




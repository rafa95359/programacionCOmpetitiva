#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << x << endl
#define REP(i,n) for(Long i = 0; i < (Long)n; i++)
#define pb push_back

using namespace std;
typedef long long Long;

Long fastPow(Long a, Long b){ //O(logb)
	if(b == 0) return 1LL;
	Long temp = fastPow(a, b / 2);
	if(b % 2 == 0) return temp * temp;
	return temp * temp * a;
}

int main() {
	Long a, b;
	cin >> a >> b;
	cout << fastPow(a,b) << endl;
	return 0;
}




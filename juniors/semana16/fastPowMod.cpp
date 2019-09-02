#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << x << endl
#define REP(i,n) for(Long i = 0; i < (Long)n; i++)
#define pb push_back

using namespace std;
typedef long long Long;

Long fastPow(Long a, Long b , Long c){ //O(logb)
	if(b == 0) return 1LL;
	Long temp = fastPow(a, b / 2, c);
	temp = (temp * temp) % c;
	if(b % 2==0){
		return temp;
	}
	return (a * temp) % c;
}

int main() {
	
	Long a, b, c;
	while(cin>>a>>b>>c){
		cout << fastPow(a,b,c) << endl;
	}
	
	
	return 0;
}




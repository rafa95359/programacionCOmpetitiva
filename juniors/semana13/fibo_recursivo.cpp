#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << x << endl
#define REP(i,n) for(Long i = 0; i < (Long)n; i++)
#define pb push_back

using namespace std;

typedef long long Long;

Long fibo(Long n){
	if(n == 0) return 0;
	if(n == 1) return 1;
	return fibo(n-1) + fibo(n-2);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	Long n;
	cin >> n;
	
	cout << fibo(n) << endl;
	
	return 0;
}




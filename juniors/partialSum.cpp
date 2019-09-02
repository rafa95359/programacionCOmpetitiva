#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << x << endl
#define REP(i , n) for(Long i = 0; i < (Long)n ; i++)
#define pb push_back

using namespace std;

typedef long long Long;

const Long MAX = 1000;
Long acum[MAX];  //acum[i ] = a[0] + a[1] + a[2]+ ... + a[i - 1]
Long a[MAX];

// x xor x = 0

//partil sum
//acum[0] = 0
//acum[1] = a[0]
//acum[2] = a[0] + a[1]
//acum[3] = a[0] + a[1] + a[2]

//a[1] + a[2] = acum[3] - acum[1] 

// sum[l , r] = a[l] + a[l+1] + a[l+2] + ... + a[r] 
// sum[l ,r] = acum[r + 1 ] - acum[l]
// xor[l , r] = xorAc[r + 1 ] xor  xorAc[l]

//xorAc[ r + 1] = a[0] xor a[1] xor a[2] .. xor a[l - 1] xor a[l] ... xor[r] 
//xorAc[l] = a[0] xor a[1] xor a[2] ... xor a[l - 1]

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	Long n;
	cin >> n;
	for(Long i = 0; i < n; i++){
		cin >> a[i];
	}
	
	for(Long i = 0; i < n; i++){
		acum[i + 1] = acum[i] + a[i];
	}
	
	return 0;
}

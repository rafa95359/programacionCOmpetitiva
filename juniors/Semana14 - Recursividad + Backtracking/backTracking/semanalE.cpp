#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << x << endl
#define REP(i,n) for(Long i = 0; i < (Long)n; i++)
#define pb push_back

using namespace std;

typedef long long Long;

Long k;
Long n;
Long respuesta;

Long A[30];

void maxXor(Long pos, Long cnt, Long xorAcum) {
	if(cnt > k) {
		//poda
		return;
	}
	if(pos == n) {
		if(cnt == k) {
			respuesta = max(respuesta , xorAcum);
		}
		return;
	}
	
	maxXor(pos + 1, cnt , xorAcum);
	maxXor(pos + 1 , cnt + 1 ,xorAcum xor A[pos]);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	Long T;
	cin >> T;
	
	for(Long t = 0; t < T; t++) {
		cin >> n >> k;	
		for(Long i = 0; i < n; i++) {
			cin >> A[i];
		}
		respuesta = -1;
		maxXor(0 , 0 , 0);
		cout << respuesta << endl;
	}
	

	return 0;
}




#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << x << endl
#define REP(i,n) for(Long i = 0; i < (Long)n; i++)
#define pb push_back

using namespace std;

typedef long long Long;

Long A[20];

Long n;
bool f(Long pos , Long suma) {
	
	if(pos == n) {
		if(suma % 360 == 0) {
			return true;
		} else {
			return false;
		}
	}
	
	/*bool x = f(pos + 1 , suma + A[pos]); //eleccion 1
	bool y = f(pos + 1 , suma - A[pos]); //eleccion 2
	
	if(x || y) {
		return true;
	}	else {
		return false;
	}*/
	
	return f(pos + 1 , suma + A[pos]) || f(pos + 1 , suma - A[pos]);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	

	cin >> n;
	
	for(Long i = 0; i < n; i++) {
		cin >> A[i];
	}
	
	if(f(0 , 0) ) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	return 0;
}




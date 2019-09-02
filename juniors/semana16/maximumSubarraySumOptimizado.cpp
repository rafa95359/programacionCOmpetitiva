#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << x << endl
#define REP(i,n) for(Long i = 0; i < (Long)n; i++)
#define pb push_back
using namespace std;

typedef long long Long;

const Long MAX = 1e5;

struct Data {
	Long sum, maxPref, maxSuf, ans;
	Data(){}
	Data(Long x){
		sum = maxPref = maxSuf = ans = x;
	}
};

Data combine(Data l, Data r) {
	Data d;
	d.sum = l.sum + r.sum;
	d.maxPref = max(l.maxPref, l.sum + r.maxPref);
	d.maxSuf = max(r.maxSuf, r.sum + l.maxSuf);
	d.ans = max(max(l.ans, r.ans), l.maxSuf + r.maxPref);
	return d;
}

Long A[MAX];

Data maximumSubarraySum(Long l, Long r) { //O(n)
	if(l == r) {
		return Data(A[l]);
	}
	
	Long med = (l + r ) / 2;
	
	Data left = maximumSubarraySum(l , med);
	Data right = maximumSubarraySum(med + 1 , r);
	return combine(left, right);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	Long n;
	cin >> n;
	
	for(Long i = 0; i <n; i++) {
		cin >> A[i];
	} 
	
	cout << maximumSubarraySum(0 , n - 1).ans << endl;
	
	return 0;
}



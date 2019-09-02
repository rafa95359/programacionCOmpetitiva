#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << x << endl
#define REP(i,n) for(Long i = 0; i < (Long)n; i++)
#define pb push_back
using namespace std;

typedef long long Long;

const Long MAX = 1e5;
Long A[MAX];

Long maxCrossingSubarray(Long l , Long med , Long r) { //O(n)
	Long maxPreffix = A[med];
	Long maxSuffix = A[med + 1];
	
	Long acum = 0;
	for(Long i = med; i >= l; i--) {
		acum += A[i];
		maxPreffix = max(maxPreffix , acum);
	}
	acum = 0;
	for(Long i = med + 1; i <= r; i++) {
		acum += A[i];
		maxSuffix = max(maxSuffix, acum);
	}
	
	return maxPreffix + maxSuffix;
}

Long maximumSubarraySum(Long l, Long r) { //O(n log n)
	if(l == r) {
		return A[l];
	}
	
	Long med = (l + r ) / 2;
	
	Long left = maximumSubarraySum(l , med);
	Long right = maximumSubarraySum(med + 1 , r);
	Long cross = maxCrossingSubarray(l , med, r);
	return max({ left, right , cross});
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
	
	cout << maximumSubarraySum(0 , n - 1) << endl;
	
	return 0;
}


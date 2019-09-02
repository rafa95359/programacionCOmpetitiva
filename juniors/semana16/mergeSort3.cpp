#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << x << endl
#define REP(i,n) for(Long i = 0; i < (Long)n; i++)
#define pb push_back
using namespace std;

typedef long long Long;

const Long INF = 1e18;

void merge(vector<Long> &v , Long l, Long med, Long r) {
	vector<Long> L, R;
	for(Long i = l; i <= r; i++) {
		if(i <= med) {
			L.push_back(v[i]);
		} else {
			R.push_back(v[i]);
		}
	}
	L.push_back(INF);
	R.push_back(INF);
	Long indL = 0;
	Long indR = 0;
	for(Long i = l; i <= r; i++) {
		//nos quedamos con el menor de los elementos
		if(L[indL] < R[indR]) {
			v[i] = L[indL];
			indL++;
		} else {
			v[i] = R[indR];
			indR++;
		}
	}	
}

void mergeSort(vector<Long> &v , Long l , Long r) { //O(n log n)
	if(l >= r) {
		return;
	}
	Long med = (l + r ) / 2;
	
	mergeSort(v , l , med);
	mergeSort(v, med + 1 , r);
	merge(v , l , med , r);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	

	Long n;
	cin >> n;
	vector<Long> v (n);
	for(Long i = 0; i <n; i++) {
		cin >> v[i];
	} 
	
	mergeSort(v , 0 , n - 1);
	cout << "Ordenado = [ ";
	for(Long i = 0; i <n; i++) {
		cout << v[i] << " ";
	} 
	cout << "]" << endl;
	return 0;
}


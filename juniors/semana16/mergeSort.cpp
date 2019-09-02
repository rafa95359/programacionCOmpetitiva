#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << x << endl
#define REP(i,n) for(Long i = 0; i < (Long)n; i++)
#define pb push_back
using namespace std;

typedef long long Long;

void merge(vector<Long> &L , vector<Long> &R, vector<Long> &v){ //O(n)
	Long indL = 0;
	Long indR = 0;
	Long n = v.size();
	for(Long i = 0; i < n; i++) {
		if(indL == (Long)L.size()) {
			//Ya usamos todo L
			v[i] = R[indR];
			indR++;
		} else if(indR == (Long)R.size()) {
			//Ya usamos todo R
			v[i] = L[indL];
			indL++;
		} else {
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
}

void mergeSort(vector<Long> &v) { //O(n log n)
	Long n = v.size();
	if(n == 1) { //caso base
		return ;
	}
	
	vector<Long> L, R;
	for(Long i = 0; i < n; i++) { //O(n)
		if(i < n / 2) {
			L.push_back(v[i]);
		} else {
			R.push_back(v[i]);
		}	
	}

	mergeSort(L);
	mergeSort(R);
	merge(L, R, v);
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
	
	mergeSort(v);
	cout << "Ordenado = [ ";
	for(Long i = 0; i <n; i++) {
		cout << v[i] << " ";
	} 
	cout << "]" << endl;
	return 0;
}


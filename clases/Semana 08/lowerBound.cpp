#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << x << endl
#define pb push_back
using namespace std;

typedef long long Long;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	//lower bound retorna un iterador al primer elemento mayor o igual a un valor que tu establezcas
	
	vector<Long> v = {0 , 1 , 3 , 8 , 9};
	
	sort(v.begin() , v.end());
	
	auto it = lower_bound(v.begin() , v.end() , 5); //O ( log n )
	Long pos = it - v.begin();
	cout << "valor = " << *it << endl;
	cout << "pos = " << pos << endl;
	
	set<Long> s;
	s.insert(0);
	s.insert(1);
	s.insert(3);
	s.insert(8);
	s.insert(9);
	s.insert(3); //no va a hacer nada
	
	auto it2 = s.lower_bound(5);
	cout << "valor = " << *it2 << endl;
	//Long pos2 = it2 - s.begin(); esto no se puede hacer en un set
	
	map<Long , Long> m;
	m[0] = 5;
	m[5] = 6;
	m[7] = -1;
	
	auto it3 = m.lower_bound(4); //lower bound en las llaves (la primera componente)
	cout << it3-> first << " , " << it3->second << endl;
	
	return 0;
}

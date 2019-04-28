#include <bits/stdc++.h>
using namespace std;
typedef long long Long;

// .insert(x) = O(Log n);
// .size() = O(1);
// .erase(x) = O(Log n);
// .erase(it1,it2) = O(n);
// .find(x) = O(Log n);

void salida(multiset<Long> &ms){
	for(auto x : ms){
		cout << x << " ";
	}
	cout << endl;
	return;
}

int main(){
	multiset<Long> ms;
	multiset<Long> :: iterator it;
	
	ms.insert(40);
	salida(ms);
	
	for(Long i = 1; i < 7; i++){
		ms.insert(i*10);
	}
	salida(ms);
	
	it = ms.begin();
	it++;
	
	ms.erase(it);
	salida(ms);
	
	ms.erase(40);
	salida(ms);
	
	it = ms.find(50);
	ms.erase(it,ms.end());
	salida(ms);
	return 0;
}

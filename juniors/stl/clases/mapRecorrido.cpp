#include <bits/stdc++.h>
using namespace std;
typedef long long Long;

int main(){
/*
5
Diego 20
Hans 22
Rafa 20
Oskar 18
Juan 17

*/
	map<string , Long> edad;
	Long n;
	cin >> n;
	
	for(Long i = 0; i < n; i++) {
		string s;
		Long e;
		cin >> s >> e;
		edad[s] = e;
	}
	cout << "---------------------" << endl << endl;
	for(map< string , Long >::iterator it = edad.begin(); it != edad.end(); it++) {
		cout << it->first << " = " << it->second << endl;
	}
	cout << "---------------------" << endl << endl;
	
	for(auto it = edad.begin(); it != edad.end(); it++) {
		cout << it->first << " = " << it->second << endl;
	}
	cout << "---------------------" << endl << endl;
	for(pair<string , Long> x : edad) {
		cout << x.first << " = " << x.second << endl;
	}
	cout << "---------------------" << endl << endl;
	for(auto x : edad) {
		cout << x.first << " = " << x.second << endl;
	}
	
	return 0;
}

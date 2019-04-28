#include <bits/stdc++.h>
using namespace std;
typedef long long Long;

int main(){
	map< string , Long> edad;
	edad.insert({"Diego" , 30}); //O(log n)
	cout << edad["Diego"] << endl;
	
	edad["Diego"] = 20; //O(log n)
	cout << edad["Diego"] << endl;
	
	
	
	return 0;
}

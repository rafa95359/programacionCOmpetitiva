#include <bits/stdc++.h>
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
using namespace std;
int main(){
    int i;
	string a;
	for(i=0;i<6;i++){ 
		cout<<i<<endl;
		cin>>a; 
		if(a[0] == 'w' || a[0] == 'a' || a[2] == ' '){
			cout << "grumpy";
			return 0;
		}
	}
	cout<<"normal";
}



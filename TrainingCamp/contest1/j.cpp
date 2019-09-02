#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	while( cin>>n){
		if ( n == 0 ) break;
		long long resp= 0;
		resp= n*(n+1)*(2*n+1)/6;
cout<<resp<<endl;
	}

}
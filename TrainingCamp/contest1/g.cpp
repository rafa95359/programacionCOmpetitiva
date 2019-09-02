#include<bits/stdc++.h>
using namespace std;
int main(){
	int s,n;
long long ans = 0;
	cin>>n>>s;
	for ( int i = n ; i >=1; i--){
		if ( s == 0 ) break;
		int u = s/i;
		ans += u;
		s = s - u*i;
	}
cout<<ans<<endl;

}

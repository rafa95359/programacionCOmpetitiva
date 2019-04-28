#include <bits/stdc++.h>

#define debug(x) cout<<#x<<" => "<<x<<endl;

#define debugArray(x,n) for(ll i = 0 ; i < n ; i++) cout<<#x<<"["<<i<<"]"" => "<<x[i]<<endl;

using namespace std;

typedef long long ll;

int main(){
/*Escribir codigo aqui*/
		string a,b;
		cin>>a>>b;
		ll as = a.size();
		ll bs = b.size();
		ll mi = min(as,bs);
		ll answ=0;
		for(ll j=1;j<=mi;j++){
			if(a[as-j]!=b[bs-j]){
				break;
			};
				answ ++;
		}
			cout<<as-answ+bs-answ<<endl;
		return 0;
}
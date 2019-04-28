#include <bits/stdc++.h>

#define debug(x) cout<<#x<<" => "<<x<<endl;

#define debugArray(x,n) for(ll i = 0 ; i < n ; i++) cout<<#x<<"["<<i<<"]"" => "<<x[i]<<endl;

using namespace std;

typedef long long ll;

int main(){
/*Escribir codigo aqui*/
		ll n,d;
		cin>>n>>d;
		vector<ll> asx;
		for(ll i=0;i<n;i++){
			ll aux;
			cin>>aux;
			asx.push_back(aux);
		}
		ll ans=0;
		for(ll i=0;i<n-2;i++){
			auto it = upper_bound(asx.begin()+i+2,asx.end(),d+asx[i]);
			ll cant = it-(asx.begin()+i);
			ans+= (cant-2)*(cant-1)/2;
		}
		cout<<ans<<endl;
		return 0;
}
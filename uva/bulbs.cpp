#include <bits/stdc++.h>

#define debug(x) cout<<#x<<" => "<<x<<endl;

#define debugArray(x,n) for(ll i = 0 ; i < n ; i++) cout<<#x<<"["<<i<<"]"" => "<<x[i]<<endl;

using namespace std;

typedef long long ll;

int main(){
/*Escribir codigo aqui*/
		ll n,m;
		cin>>n>>m;
		set<ll> bulbs;
		for(ll j=0;j<n;j++){
			ll aux;
			cin>>aux;
			for(ll i=0;i<aux;i++){
				ll as;
				cin>>as;
				bulbs.insert(as);
			}
		}
		if(bulbs.size() == m){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;}
		return 0;
}
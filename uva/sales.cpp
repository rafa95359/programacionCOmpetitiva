#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

		ll t;
		cin>>t;
		for(ll i=0;i<t;i++){
			ll a;cin>>a;
			vector<ll> arrA;
			for(ll i=0;i<a;i++){
				ll aux;
				cin>>aux;
				arrA.push_back(aux);
			}
			ll ans=0;
			for(ll i=1;i<a;i++){
				for(ll j=0;j<i;j++){
					if(arrA[j]<=arrA[i]) ans++;
				}
			}
			cout<<ans<<endl;
		}
		return 0;
}
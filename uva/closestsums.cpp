#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

		ll a;
		ll numbCase =1;
		while(true){
			cin>>a;
			if(a ==0) break;
			vector<ll> aerr;
			for(ll i=0;i<a;i++){
				ll aux;cin>>aux; aerr.push_back(aux);
			}
			ll m;
			cin>>m;
			cout<<"Case "<<numbCase<<":"<<endl;
			for(ll i=0;i<m;i++){
				ll aux;
				cin>>aux;
				ll clos= LLONG_MAX;
				ll answ= 0;
				for(ll i=0;i<a-1;i++){
					for(ll j=i+1;j<a;j++){
						if( abs( aerr[i]+ aerr[j] - aux ) <clos){
							answ = aerr[i]+ aerr[j];
							clos = abs( aerr[i]+ aerr[j] - aux );
						}
					}
				}
				cout<<"Closest sum to "<<aux<<" is "<<answ<<"."<<endl;
			}
			numbCase++;
		}
		return 0;
}
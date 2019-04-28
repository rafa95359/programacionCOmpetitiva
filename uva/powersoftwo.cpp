#include <bits/stdc++.h>

#define debug(x) cout<<#x<<" => "<<x<<endl;

#define debugArray(x,n) for(ll i = 0 ; i < n ; i++) cout<<#x<<"["<<i<<"]"" => "<<x[i]<<endl;

using namespace std;

typedef long long ll;

int main(){
/*Escribir codigo aqui*/
		ll n;
		vector<ll> powsOfTwo;
		ll aux =1;
		powsOfTwo.push_back(aux);
		while(aux<=2*10000000000){
			aux *=2;
			powsOfTwo.push_back(aux);
		}
		map<ll,ll> mapOfLL;
		vector<ll> numbes;
		cin>>n;
		for(ll i=0;i<n;i++){
			ll aux;
			cin>>aux;
		numbes.push_back(aux);

			mapOfLL[aux]++;
		}
		ll anse =0;
		for(ll i=0;i<n;i++){
			ll numSss = numbes[i];
			for(ll j=0;j<powsOfTwo.size();j++){
				ll search = powsOfTwo[j]-numbes[i];
				if(mapOfLL[search]){
					if(search == numbes[i]) anse+=mapOfLL[search]-1;
					else {anse += mapOfLL[search];}
				}
			}
		}
		cout<<anse/2<<endl;
		return 0;
}
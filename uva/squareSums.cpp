#include <bits/stdc++.h>

#define debug(x) cout<<#x<<" => "<<x<<endl;

#define debugArray(x,n) for(ll i = 0 ; i < n ; i++) cout<<#x<<"["<<i<<"]"" => "<<x[i]<<endl;

using namespace std;

typedef long long ll;

int main(){
/*Escribir codigo aqui*/
		ll cont =1;
		while(true){
			ll n;
			cin>>n;
			if(n == 0) break;
			vector< vector <ll> > sums;
			for(ll j=0;j<n;j++){
				vector<ll> auxass;
				for(ll k=0;k<n;k++){
					ll aux;
					cin>>aux;
					auxass.push_back(aux);
				}
				sums.push_back(auxass);
			}
			cout<< "Case "<<cont++<<":";
			for(ll j=0;j< n/2+n%2 ;j++){
				ll sum =0;
					for(ll fff=j;fff<n-j;fff++){
				for(ll k=j;k<n-j;k++){
					if(min(fff,k) == j || max(fff,k) == n-1-j ){
						sum+=sums[fff][k];
					}
				}
			}
			cout<<" "<<sum;
			}
			cout<<endl;
		}

		return 0;
}
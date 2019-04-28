#include <bits/stdc++.h>

#define debug(x) cout<<#x<<" => "<<x<<endl;

#define debugArray(x,n) for(ll i = 0 ; i < n ; i++) cout<<#x<<"["<<i<<"]"" => "<<x[i]<<endl;

using namespace std;

typedef long long ll;

int main(){
/*Escribir codigo aqui*/
		ll n;
		cin>>n;
		vector<ll> soldiers;
		for(ll i=0;i<n;i++){
			ll aux;
			cin>>aux;
			soldiers.push_back(aux);
		}
		ll a,b;
		ll min = 2000;
		for(ll i=0;i<n;i++){
			if(abs(soldiers[i] - soldiers[i+1] ) <min ){
				min = abs(soldiers[i] - soldiers[i+1] );
				a=i+1;
				b=i+1+1;
			}
		}
			if(abs(soldiers[0] - soldiers[n-1] ) <min ){
				a=n;
				b=1;
			}
		cout<<a<<" "<<b<<endl;
		return 0;
}
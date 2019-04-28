#include <bits/stdc++.h>

#define debug(x) cout<<#x<<" => "<<x<<endl;

#define debugArray(x,n) for(ll i = 0 ; i < n ; i++) cout<<#x<<"["<<i<<"]"" => "<<x[i]<<endl;

using namespace std;

typedef long long ll;

int main(){
/*Escribir codigo aqui*/
		ll n;
		char ty;
		cin>>n;
		cin>>ty;

		double sum =0.0;
		for(ll i=0;i<12;i++){
			for(ll j=0;j<12;j++){
			double aux;
			cin>>aux;
			if( j== n){
				sum+=aux;
			}
			}
		}
		if(ty == 'S'){
			cout<<fixed<<setprecision(1)<<sum<<endl;
		}else{
			cout<<fixed<<setprecision(1)<<sum/12.0<<endl;
		}
		return 0;
}
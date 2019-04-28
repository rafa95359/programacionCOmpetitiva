#include <bits/stdc++.h>

#define debug(x) cout<<#x<<" => "<<x<<endl;

#define debugArray(x,n) for(ll i = 0 ; i < n ; i++) cout<<#x<<"["<<i<<"]"" => "<<x[i]<<endl;

using namespace std;

typedef long long ll;

int main(){
/*Escribir codigo aqui*/
ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;
	cin>>n;
	for(ll i=0;i<n;i++){

		ll x,y,p,q;
		cin>>x>>y>>p>>q;
		if(p == q && x != y || (p==0)&&(x>0)){
			cout<<-1<<endl;
		}else{
			if(p==0){
			    ll b = y/q;
			    if(y%q){
			    	b++;
			    }
			    ll c = (y-x)/(q-p);
			    if((y-x)%(q-p) ){
			    	c++;
			    }
			    cout<<q*((ll)max({b,c}))-y<<endl;
			}else{
					ll a = x/p;
			if(x%p){
				a++;
			}
			ll b = y/q;
			if(y%q){
				b++;
			}
			ll c = (y-x)/(q-p);
			if((y-x)%(q-p) ){
				c++;
			}
			cout<<q*((ll)max({a,b,c}))-y<<endl;
			}
		
		}
	}
	return 0;
}
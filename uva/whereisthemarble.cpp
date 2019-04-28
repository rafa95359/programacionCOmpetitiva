#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

		ll n,q;
		ll numbCase =1;
		while(true){
			cin>>n>>q;
			vector<ll> auxil;
			if(n==0 && q==0){
				break;
			}
			for(ll i=0;i<n;i++){
				ll aux;
				cin>>aux;
				auxil.push_back(aux);
			}
			cout<<"CASE# "<<numbCase<<":"<<endl;

			sort(auxil.begin(),auxil.end());
			for(ll i=0;i<q;i++){
				ll aux;
				cin>>aux;
				auto aaa = find( auxil.begin(), auxil.end(), aux);
				if(aaa != auxil.end()){
					cout<<aux<<" found at "<<aaa-auxil.begin()+1<<endl;
				}else{
					cout<<aux<<" not found"<<endl;
				}
			}
			numbCase++;
		}
		return 0;
}
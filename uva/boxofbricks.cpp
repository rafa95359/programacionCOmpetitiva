#include <bits/stdc++.h>

#define debug(x) cout<<#x<<" => "<<x<<endl;

#define debugArray(x,n) for(ll i = 0 ; i < n ; i++) cout<<#x<<"["<<i<<"]"" => "<<x[i]<<endl;

using namespace std;

typedef long long ll;

int main(){

		ll a;
		ll numbSets =1;
		while(true){
			cin>>a;
			if(a == 0) break;
			vector<ll> columns;
			ll sum =0;
			for(ll i=0;i<a;i++){
				ll aux;
				cin>>aux;
				sum+=aux;
				columns.push_back(aux);
			}
			ll ideal = sum/a;
			ll moves = 0;
			for(ll i=0;i<a;i++){
				moves+= abs(columns[i]-ideal);
			}
			cout<<"Set #"<<numbSets<<endl;
			cout<<"The minimum number of moves is "<<moves/2<<"."<<endl;
			cout<<endl;
			numbSets++;
		}
		return 0;
}
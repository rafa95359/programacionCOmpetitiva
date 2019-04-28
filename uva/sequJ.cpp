#include <bits/stdc++.h>

#define debug(x) cout<<#x<<" => "<<x<<endl;

#define debugArray(x,n) for(ll i = 0 ; i < n ; i++) cout<<#x<<"["<<i<<"]"" => "<<x[i]<<endl;

using namespace std;

typedef long long ll;

int main(){
/*Escribir codigo aqui*/
		ll n,m;
		cin>>n>>m;
		vector<vector<ll>> points; 
		for(ll i=0;i<n;i++){
			for(ll j=0;j<m;j++){
				char au;
				cin>>au;
				if(au == '*'){
					vector<ll> auxil;
					auxil.push_back(i);
					auxil.push_back(j);
					points.push_back(auxil);
				}
			}
		}
		if(points[0][1] == points[1][1] && points[1][0] == points[2][0] ){
			cout<<points[0][0]+1<<" "<<points[2][1]+1<<endl;
		}else if(points[0][1] == points[2][1] && points[1][0] == points[2][0]){
			cout<<points[0][0]+1<<" "<<points[1][1]+1<<endl;
		}else if(points[0][0] == points[1][0] && points[1][1] == points[2][1]){
			cout<<points[2][0]+1<<" "<<points[0][1]+1<<endl;
		}else if(points[0][1] == points[2][1] && points[0][0] == points[1][0]){
			cout<<points[2][0]+1<<" "<<points[1][1]+1<<endl;
		}
		return 0;
}
#include <bits/stdc++.h>

#define debug(x) cout<<#x<<" => "<<x<<endl;

#define debugArray(x,n) for(ll i = 0 ; i < n ; i++) cout<<#x<<"["<<i<<"]"" => "<<x[i]<<endl;

using namespace std;

typedef long long ll;

int main(){
		ll n;
		cin>>n;
		cout<<"Lumberjacks:"<<endl;
		for(ll i=0;i<n;i++){
			ll a,b;
			cin>>a>>b;
			bool isCrec;
			if(a>b) isCrec = false;
			else isCrec = true;
			bool answ = true;
			for(ll i=2;i<10;i++){
				ll aux;
				cin>>aux;
				if(isCrec){
					if(aux<b) answ = false;
					b =aux;
				}else{
					if(aux>b) answ = false;
					b =aux;
				}
			}
			if(answ){
				cout<<"Ordered"<<endl;
			}else{
				cout<<"Unordered"<<endl;
			}
		}

		return 0;
}
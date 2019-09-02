#include <bits/stdc++.h>

#define debugArray(x,n) for(ll i = 0 ; i < n ; i++) cout<<#x<<"["<<i<<"]"" => "<<x[i]<<endl;

using namespace std;

typedef long long ll;

int main(){
/*Escribir codigo aqui*/
	vector<ll> blocks;
	vector<vector<ll>> answer;
	ll n,k;
	cin>>n>>k;
	for(ll i=0;i<n;i++){
		vector<ll> aux;
		answer.push_back(aux);
	}
	for(ll i=0;i<n;i++){
		ll aux;
		cin>>aux;
		blocks.push_back(aux);
	}
	for( ll i = 1;i <= k;i++){
		ll minimo  = LONG_MAX;
		for(ll j=0;j<n;j++){
			minimo = min(minimo, blocks[j]);
		}
        cout<<"i "<<i<<" minimo "<<minimo<<endl;
		ll itera =0;
		for(auto block : blocks){
			if(block >0){
			if(block == minimo){
				for(ll a =0;a<minimo;a++){
					answer[itera].push_back(i);
				}
			}else{
				for(ll a =0;a<minimo+1;a++){
					answer[itera].push_back(i);
				}
			}
			}
			itera++;
		}
        for(ll i=0;i<n ;i++){
			for(auto a:answer[i]){
				cout<<a<<" ";
			}
			cout<<endl;
		}
	
		for(ll iter = 0;iter<blocks.size();iter++){
			ll val = blocks[iter];
            cout<<"blocks "<<val<<"   ";
			if(val >0){
				if(val == minimo ){
					blocks[iter] =0;
				}else{
					blocks[iter] = blocks[iter]-(minimo+1);
				}
			}
            cout<<blocks[iter]<<endl;
		}
	}
	bool isAnswer = true;
	for(ll i =0 ;i<n;i++){
		if(blocks[i] >0){
			isAnswer = false;
		}
	}
	if( !isAnswer ){
		cout<<"NO"<<endl;
	}else{
		cout<<"YES"<<endl;
	for(ll i=0;i<n ;i++){
			for(auto a:answer[i]){
				cout<<a<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}

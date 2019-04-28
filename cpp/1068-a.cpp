#include <bits/stdc++.h>
using namespace std;



int main(){
   long long n,amigos,coins,min;
   
   cin>>n>>amigos>>coins>>min;
   	
	if(amigos>n || coins > n-min ||  min > n) cout<<-1<<endl;
	else{
		long long x= (min+coins)/amigos;

		
		if((min+coins)%amigos == 0){
			if(amigos*x<=n) cout<<x<<endl;
			else cout<<-1<<endl;
		}
		else {	
		if(amigos*(x+1)<=n)cout<<x+1<<endl;
			else cout<<-1<<endl;			
		}

	}




   return 0;
}
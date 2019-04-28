#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,ninos=0,i=1;
    cin>>n;
    while(ninos == 0){    	
    	if(i * (i+1) > 2 * n) ninos=i-1;		
    	i++;    	
	}
	cout<<ninos<<endl;
	for(int k=1;k<ninos;k++){
		cout<<k<<" ";
	}
    int x =ninos*(ninos+1)/2;
    cout<<ninos+n-x<<endl;
    return 0;
}
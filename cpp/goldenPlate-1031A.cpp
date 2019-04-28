#include <bits/stdc++.h>

using namespace std;
int ring(int a,int b){
	
	return 2*a+2*b-4;
}
int main(){
    
    int n,m,a;
    cin>>n>>m>>a;
    int suma=0;
    for(int i=1;i<=a;i++){
    	suma += ring(n-4*i+4,m-4*i+4);
	}
    cout<<suma<<endl;
    
    return 0;


}
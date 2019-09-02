#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long n,l,r;
    cin>>n>>l>>r;
    Long mayor=0;
    Long sumMin=0;
    Long sumMax=0;
    Long aux=1;
    para(i,0,l){
        sumMin+=aux;
        aux*=2;
    }
    aux=1;
    para(i,0,r){
        sumMax+=aux;
        aux*=2;
    }
    sumMin+=n-l;
    sumMax+=(n-r)*(aux/2);
    cout<<sumMin<<" "<<sumMax<<endl;    
    return 0;
}
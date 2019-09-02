#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long t;
    cin>>t;
    para(i,0,t){
        Long n,k,a,b;
        cin>>k>>n>>a>>b;
        Long m=(k-1)/b;
        if(m<n){
            cout<<-1<<"\n";
            continue;
        }
        Long li=0;
        Long hi=(k-1)/a;
        Long bx=(k-hi*a)/b;
        Long med=hi;
        while(hi>li+1){            
            med=(li+hi)/2;
            bx=(k-med*a-1)/b;
            if(med+bx<n){
                hi=med;
                
            }else{
                li=med;
            }
        }
        Long resp=li;
        for(int l=1;l<3;l++){
            Long j=(k-(l+li)*a-1)/b;
            if((li+l)+j>=n && (k-(l+li)*a>=1) && j>=0){
                resp=li+l;
            }
        }       
        cout<<min(resp,n)<<"\n";
    } 

    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
Long num[1000003];

int main(){
    Long n,q;
    cin>>n;
    Long x[n];
    para(i,0,n){
       
        cin>>x[i];
       
    }
    sort(x,x+n);  
    cin>>q;
     
    for(Long i=0;i<q;i++){
        Long m;
        cin>>m;
         cout<<upper_bound(x,x+n,m)-x<<endl;
        
    }
    
    return 0;
}
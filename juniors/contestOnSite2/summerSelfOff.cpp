#include <bits/stdc++.h>
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
using namespace std;

int main(){
    Long n,k;
    cin>>n>>k;
    Long prod[n],cliente[n],dif[n];
    Long max;
    Long sum=0;
    para(i,n){
        cin>>prod[i]>>cliente[i];
        if(prod[i] >=cliente[i])dif[i]=0;
        else{
            if(2*prod[i]<=cliente[i])dif[i]=prod[i];
            else{
                dif[i]=cliente[i]-prod[i];
            }
        }
        sum+=min(prod[i],cliente[i]);       
        
    }  
    sort(dif,dif+n);
    para(i,k){
        sum+=dif[n-1-i];
    }
    cout<<sum<<endl;
    
    
    return 0;
}
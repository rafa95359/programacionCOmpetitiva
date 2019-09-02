#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
Long abc[27];
int main(){
    Long n,k;
    cin>>n>>k;
    string a;
    cin>>a;
    Long mayor=0;
    for (Long i=0;i<=n-k;i++) {

        Long contador=1,j=0;
        for(j;j+1<k;j++){
            if(a[i+j+1]==a[i])contador++;
            else{
                break;
            }
        }      
        if(contador == k){            
            abc[a[i]-'a']++;            
            if(abc[a[i]-'a']>mayor){
                mayor=abc[a[i]-'a'];
            }
        }   
        i+=j;       
    }
    cout<<mayor;
        
    return 0;
}

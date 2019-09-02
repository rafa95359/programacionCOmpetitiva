#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
const Long x=1e7+10;
Long is_prime[x];

int main(){
    
 
 
    is_prime[0] = is_prime[1] = 1;    

    for (int i = 2; i <= x; i++) {
        if (is_prime[i]==0 ) {
            for (int j = i*2 ; j <= x; j += i){
                    if(is_prime[j]==-2)continue;
                    if(j%(i*i)==0){
                        is_prime[j]=-2;
                    }else{
                        is_prime[j]++;                        
                    }
                         
            }
                
        }
    }  
    for(int i=2;i<=x;i++){
        if(is_prime[i]==-2){
            is_prime[i]=0;
            continue;
        }
        if(is_prime[i]==0){
            is_prime[i]=-1;
            continue;
        }    
        if(is_prime[i]%2==0){
            is_prime[i]=1;
        }else{
            is_prime[i]=-1;
        }
        
    }
    
    Long t;
    cin>>t;
    para(i,0,t){
        Long n;
        cin>>n;
        /* 
        para(j,0,n){
            cout<<is_prime[j]<<" ";
        }
        cout<<endl; */
        Long can=0;
        for(Long j=2;j*j<=n;j++){           
           can+=((is_prime[j]*n)/(j*j));
           //cout<<j<<" "<<can<<endl;
        }
        cout<<n+can<<endl;
    }
    

}



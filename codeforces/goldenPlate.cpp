#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
int main(){
    Long n,m,k;
    cin>>n>>m>>k;
    Long can=0;
    Long anillos=0;
    for(Long i=1;i<=n;i++){
        
        Long a=min(n-4*(i-1),m-4*(i-1));
        Long b=max(n-4*(i-1),m-4*(i-1));  
        if(a<=0 || b<=0 || anillos==k)break;      
        if(a==1){
            can+=b;
        }
        else{
            can+=2*(a+b)-4;
        }
        anillos++;
    }
    cout<<can<<endl;
    


    return 0;
}


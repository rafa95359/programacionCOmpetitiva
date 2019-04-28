#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
int main(){
    Long n,k;
    cin>>n>>k;
    
    Long con=0,ultimo;
    for(Long i=0;i<n;i++){           
        cout<<i+1<<" "; 
        con++;
        if(con==k){
            ultimo=i+1;
            break;
        }    

        cout<<n-i<<" ";
        con++;
        
        if(con==k){
            ultimo=n-i;
            break;
        }  
    }
    if(k%2==0){
        for(Long i=0;i<n-con;i++){
            cout<<ultimo-i-1<<" ";
        }
    }
    else{
        for(Long i=0;i<n-con;i++){
            cout<<ultimo+i+1<<" ";
        }
    }
    
    
    return 0;
}

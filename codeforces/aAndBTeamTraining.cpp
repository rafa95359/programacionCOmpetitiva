#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
Long dividir(Long a,Long b){
    Long resp=a/b;
    if(a%b==0){
        return resp;
    }
    return resp+1;
}
int main(){
    Long n,m;
    cin>>n>>m;
    if( m<n)swap( n,m);
    if(2*n<=m){
        cout<<n<<endl;
    }else{
        Long x =dividir((2*n-m),3);
        Long y=n-2*x;
        cout<<x+y<<endl;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
    
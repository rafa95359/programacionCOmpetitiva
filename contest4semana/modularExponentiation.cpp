#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
int main(){
    Long n,m;
    cin>>n>>m;
    Long valor=2,exp=0;

    while(valor<=m){        
        valor=pow(2,exp);
        exp++;
    }
    if(exp < n)cout<<m<<endl;
    else{
        Long aux=pow(2,n);
        cout<<(Long)(m  % aux)<<endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
int main(){
    Long a,b;
    cin>>a>>b;
    Long can=0;
    while(a % b!=0){
        //can++;
        Long aux1=a/b;
        Long aux = a-aux1*b;
        can+=aux1;
        a = max( aux,b);
        b = min (aux,b);
        if( a % b ==0){
            can+=a/b;
        }
    }
    if(can==0)cout<<a/b<<endl;
    else cout<<can;
    return 0;
}

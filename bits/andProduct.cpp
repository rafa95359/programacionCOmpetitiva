#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
int main(){
    Long n;
    cin>>n;
    para(k,0,n){
        Long a,b;
        cin>>a>>b;
       
        Long x=(a^b);
        Long i=__builtin_clz(x);
        a=a>>(32-i);
        a=a<<(32-i);
        cout<<a<<endl;
    }
    return 0;
}
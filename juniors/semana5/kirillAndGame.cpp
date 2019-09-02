#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
int main(){
    Long a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    for (Long i = c;i<=d;i++){
        if(i*e>=a && i*e <=b){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;

    return 0;
}

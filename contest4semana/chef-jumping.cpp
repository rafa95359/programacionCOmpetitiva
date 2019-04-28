#include <bits/stdc++.h>
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long t;
    cin>>t;
    Long inicio=1;
    Long aum=3;
    while(true){
        if( inicio <= t && t<inicio+aum){
            break;
        }
        inicio+=aum;
        aum*=2;
    }
    cout<<inicio+aum-t<<endl;

}
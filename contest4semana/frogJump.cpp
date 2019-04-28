#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
int main(){
    Long n;
    cin>>n;
    para(i,n){
        Long a,b,k;
        cin>>a>>b>>k;
        if( k % 2 == 0){
            cout<<(a-b)*k/2<<endl;
        }else{
            cout<<(a-b)*(k-1)/2+a<<endl;
        }
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
#define p 10000007
typedef long long Long ;
Long fastPowMod(Long x,Long n){
    Long ans = 1;
    x%=p;
    while ( n ){
        if( n & 1 )ans = ( ans * x )%p;
        x = (x*x)%p;
        n >>= 1;
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long a,b;
    while(cin>>a>>b,a!=0 && b!=0){
        Long resp=2*fastPowMod(a-1,b)+fastPowMod(a,b);
        Long resp2=2*fastPowMod(a-1,a-1)+fastPowMod(a,a);
        cout<<(resp+resp2)%p<<endl;
    }
    return 0;
}
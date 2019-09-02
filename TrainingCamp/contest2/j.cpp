#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int cases;
    cin>>cases;
    for ( int tt = 0; tt < cases ; tt++ ){
        ll n;
        cin>>n;
        long double ans=2.0/3.0+ 1.0/2.0*(1.0/6.0-(1.0/((n +1)*(n+2))));
        printf("%.11Lf\n",ans);
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for ( int a = 0 ;a < n; a++ ){
        int x;
        cin>>x;
        int xx = x;
        long long ans = 0;
        while ( x ){
            ans += x/2;
            x = x/2;
        }
        long long ans2 = 0;
        while ( xx ){
            ans2 += xx/5;
            xx=xx/5;
        }
        cout<<min(ans,ans2)<<'\n';
    }

}

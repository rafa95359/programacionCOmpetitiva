#include<bits/stdc++.h>
using namespace std;
int pr[ 1000002 ];
int res[1000003];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    long long m = 1000000;
    memset( pr ,-1,sizeof(pr ) );
    for ( long long i = 2; i*i <= m; i++ ){
        if ( pr[ i ] != -1 ) continue;
        for ( long long j = i*i; j <= m ; j += i ){
            pr[ j ] = i;
        }
    }
    for ( int i =1; i<= 1000000; i++ ){
        int z =i;
        int ans = 1;
        while ( 1 ){
            if ( z == 1 ){
                break;
            }
            if ( pr[ z ] == -1 ){
                ans = ans * 2;
                break;
            }
            int u = pr[ z ];
            int cnt = 0;
            while ( z % u == 0 ){
                z/=u;
                cnt++;
            }
            ans = ans*(cnt+1);
        }
        res[ i ] = ans;
    }
    for ( int a= 0 ; a < n; a++ ){
        int x,y;
        cin>>x>>y;
        int z =__gcd(x,y);
        cout<<res[ z ]<<'\n';
    }
}
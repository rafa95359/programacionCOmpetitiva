#include<bits/stdc++.h>
using namespace std;
int vis[ 1004];
vector< int >g[ 1004 ];
int conta= 0;
void dfs( int x ){
    conta++;
    vis[ x ] = 1;
    for ( int i= 0 ; i <(int)g[ x ].size(); i++ ){
        int v = g[x ][ i ];
        if ( !vis[ v ] ){
            dfs( v );
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int cases;
    cin>>cases;
    for ( int tt = 0 ; tt < cases; tt++ ){
        int n ,canti;
        cin>>n;
        int ans = 0;
        for ( int j = 0 ; j < n; j++ ){
            cin>>canti;
            for ( int i = 0 ; i <canti ; i++ ){
                int x;
                cin>>x;
                x--;
                g[ x ].push_back( j );
            }
        }

        for ( int i = 0 ; i < n; i++ ){
            memset( vis , 0,sizeof(vis ) );
            conta = 0;
            dfs( i );
            if ( conta == n  ){
                ans++;
            }
        }
        for ( int i = 0 ; i < n; i++ ) g[ i ].clear();
        cout<<ans<<"\n";
    }
}
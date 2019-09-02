#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector< int >g[ 2003 ];
int pr[2003];
int main(){
    ios_base::sync_with_stdio(false);
    int cases;
    cin>>cases;
    for ( int tt = 0; tt < cases; tt++ ){
        int n,m;
        cin>>n>>m;
        int ok = 0;
        for ( int i = 0 ; i <m ; i++ ){
            int x, y;
            cin>>x>>y;
            x--,y--;
            g[ x ].push_back( y );
            g[ y ].push_back( x );
        }
        memset( pr , -1,sizeof(pr ));
        queue< int > Q;
        for ( int i = 0; i < n; i++ ){
            if ( pr[ i ] != -1 ) continue;
            pr[ i ] = 1;
            Q.push( i );
            while ( !Q.empty() ){
                int u = Q.front();
                for ( int i = 0 ; i < (int)g[ u ].size(); i++ ){
                    int v = g[ u ][ i ];
                    if ( pr[ v ] == -1 ){
                        pr[ v ]= pr[ u ]^1;
                        Q.push(v );
                    }else if ( pr[ v ] == pr[ u ] ){
                        ok = 1;
                    }
                }
                Q.pop();
            }
        }
        if ( ok ){
            cout<<"Scenario #"<<(tt+1)<<":"<<'\n';
            cout<<"Suspicious bugs found!"<<'\n';

        }else{
            cout<<"Scenario #"<<(tt+1)<<":"<<'\n';
            cout<<"No suspicious bugs found!"<<'\n';
        }
        for ( int i = 0 ; i < n; i++ ) g[ i ].clear();
    }
  }
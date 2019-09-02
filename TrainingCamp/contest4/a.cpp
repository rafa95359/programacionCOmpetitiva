#include <bits/stdc++.h>
using namespace std;

int d[ 10004];
vector<int> g[ 10004];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    while ( cin>>n ){
        if ( n == - 1 ) break;
        for ( int i = 0 ; i< n - 1 ; i++ ){
            int x;
            cin>>x;
            x--;
            g[ i+1 ].push_back( x );
            g[ x ].push_back(  i + 1 );
        }
        queue< int > Q;
        Q.push( 0 );
        memset( d,-1,sizeof(d));
        d[ 0 ]=0;

        while (!Q.empty() ){
            int u = Q.front();
            Q.pop();
            for ( int i=0;i <(int)g[u].size();i++){
                int v=g[u][i];
                if( d[v ] == -1 ){
                    d[ v ]=d[ u ]+1;
                    Q.push(v);
                }
            }
        }
        int xx;
        int maxi = 0;
        for ( int i = 0; i < n; i++ ){
            if ( d[ i ] > maxi ){
                xx = i;
                maxi = max( maxi , d[ i ] ); 
            }
        }
        memset( d,-1,sizeof(d));
        d[xx]=0;
        Q.push(xx );
        while (!Q.empty() ){
            int u = Q.front();
            Q.pop();
            for ( int i=0;i <(int)g[u].size();i++){
                int v=g[u][i];
                if( d[v ] == -1 ){
                    d[ v ]=d[ u ]+1;
                    Q.push(v);
                }
            }
        }
        maxi = 0;
        for ( int i = 0; i < n; i++ ){
            if ( d[ i ] > maxi ){
                xx = i;
                maxi = max( maxi , d[ i ] ); 
            }
        }
        cout<<(maxi-1)/2+1<<endl;
        for ( int i = 0; i <n ; i++){
            g[ i ].clear();
        }
    }

    return 0;
}
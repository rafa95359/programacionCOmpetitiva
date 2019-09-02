#include <bits/stdc++.h>
using namespace std;
int vis[ 10003 ];
int degre[ 10004];
set< int > g[ 10004];

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
            g[ i+1 ].insert( x );
            g[ x ].insert(  i + 1 );
            degre[ x ]++;
            degre[ i+1 ]++;
        }
        set< pair< int , int > > v;

        for ( int i = 0 ; i < n; i++ ){
            v.insert( make_pair( degre[ i ] , i ) );
        }
    
        int ans = 0, pos =0;
        int canti = n;

        while ( canti > 1  ){
            int x;

            int cantix=0;
            while ( 1 ){
                set< pair< int , int > > :: iterator u  = v.end();
                u--;
                if ( vis[ (*u).second ] ){
                    v.erase(u);
                }else{
                    x = (*u).second;
                    cantix = (*u).first;
                    break;
                }
            }
            vector< int > nuevos;
            int cz = 0;

            vector< int > aux;
            for ( set< int > :: iterator it1 = g[ x ].begin(); it1 != g[ x ].end(); it1++ ){
                int yi = (*it1);
                vis[ yi ] = 1;
                aux.push_back( yi );
                canti--;
                for ( set< int > :: iterator it2 = g[ yi ].begin(); it2 != g[ yi ].end(); it2++){
                    int z = (*it2);
                    if ( z == x ){
                        continue;
                    }
                    nuevos.push_back( z );
                    cz++;
                    
                    g[ z ].erase( yi );
                }
               // g[ x ].erase( yi );
            }
            for ( int i =0 ; i < (int)aux.size(); i++ ){
                g[ x ].erase( aux[ i ] );
            }
            for ( int i = 0 ; i < (int)nuevos.size(); i++ ){
                g[ x ].insert( nuevos[ i ] );
                g[ nuevos[i] ].insert( x );
            }
            v.erase( v.lower_bound( make_pair( cantix , x) ) );
            if ( cz != 0 ) v.insert( make_pair( cz,x ) );
            ans++;
        }
        for ( int i = 0 ; i < n; i++ ){
            g[ i ].clear();
        }
        memset( vis , 0, sizeof( vis ) );
        memset( degre, 0 , sizeof( degre));
        cout<<ans<<endl;
    }

    return 0;
}

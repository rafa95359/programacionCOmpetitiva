#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    int n,m;
    cin>>n;
    vector< int > a( n );
    for ( int i = 0 ; i <n ; i++ ){
        cin>>a[ i ];
    }
    cin>>m;
    vector< int > b( m );
    for ( int i = 0; i < m; i++  ){
        cin>>b[ i ];
    }
    sort( a.begin(),a.end());
    sort( b.begin(),b.end());

    int px = 0 , py = 0;
    int ans = 0;
    while ( px < n && py < m ){
        if ( abs( a[ px ] - b[ py ] ) <= 1 ){
            px++;
            py++;
            ans++;
        }else{
            if ( a[px ] < b[ py ] ){
                px++;
            }else{
                py++;
            }
        }
    }
    cout<<ans<<"\n";
}

#include<bits/stdc++.h>
using namespace std;
int f( int n , int a ){
    return max( n/(a+1),(n+1)/(a+1));
}
int main(){
    int n,k,a;
    cin>>n>>k>>a;
    int m;
    cin>>m;
    vector< int>v( m );
    for ( int i = 0 ; i <m ; i++ ){
        cin>>v[ i ];
    }
    set<int > s;
    s.insert( 0 );
    s.insert( n +1 );
    int total=f(n,a);
    int res=-1;
    for ( int i = 0 ; i < m ; i++ ){
        set< int >::iterator it = s.upper_bound( v[ i ] );
        int y = (*it);
        it--;
        int x = (*it);
        if ( y - x <= 1 ) continue;
        int tot2 = f( y -x - 1 ,a);
  

        int canti = f( v[ i ] - x -1,a);
        if ( v[ i ]-x <= 1 ){
            canti = 0;
        }
        if( y-v[i]>1 ){
            canti += f( y - v[i]-1,a);
        }

        total = total-tot2+canti;
        if ( total < k ){
            res = i+1;
            break;
        }
        s.insert( v[ i ] );
    }
    cout<<res<<endl;
}
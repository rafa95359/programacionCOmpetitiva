#include<bits/stdc++.h>
#define EPS 1e-9
using namespace std;
long long f( long long x , long long y ){
    long long u = x/y;

    double x1 = x;
    double y1 = y;

    x1 = x1/y1;
    x1-= u;
    if ( x1 + EPS > 0.5 ) return x/y+1;
    else return x/y;

    // u%=10;
    // if ( u >= 5 )return x/y+1;
    // else return x/y;
}
int main(){
    int cases;
    long long  n,m;
    while ( cin>>m>>n ){
        if ( m == -1 && n == -1 ) break;
        long long c1 = f( (20*m), n);
        long long  por= f( (100*m),n);
       vector<char> v( 20,'-');
        for ( int i = 0 ; i < c1; i++ ){
            v[ i ] = '*';
        }
        if ( por == 100 ){
            v[ 8 ] = '1';
            v[9]='0';
            v[10]='0';
            v[11]='%';
        }else if ( por >= 10 ){
            v[ 9 ]= por/10+'0';
            v[ 10 ] = por%10+'0';

            v[11]='%';
        }else{
            v[ 9 ] = por+'0';

            v[10]='%';
        }
        for ( int i = 0 ; i < 20; i++ ){
            cout<<v[ i ];
        }
        cout<<endl;
    }
    
}

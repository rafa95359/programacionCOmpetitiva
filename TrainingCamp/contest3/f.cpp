#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
map< int , int > pr;

int pr2[ 100002 ];
int main(){
    ios_base::sync_with_stdio(0);
    int cases;
    memset( pr2,-1,sizeof( pr2 ) );
    for ( long long i = 2; i<= 100001; i++ ){
        if ( pr2[ i ] != -1 ) continue;
        for ( long long j = i*2; j<= 100000 ; j+= i){
            pr2[ j ] =i;
        }
    }

    int n;
        cin>>n;
        int ok2= 0;
        for ( int i= 0 ; i < n ; i++ ){
            long long x,y;
            cin>>x>>y;
            pr.clear();
            if ( i ) cout<<endl;
            for ( long long j = 2; j <= 100000 ; j++ ){
                if ( pr2[j]!=-1 ) continue;
              
                long long val;
                int op =0;
                if ( j < x ){
                    val = ( x-1)/j+1;
                    val = val*j;
                    op=1;
                }else{
                    val = j*2;
                    op=2;
                }
                
                for ( long long k=val; k <= y ; k += j ){
                    //cout<<k<<",";
                    pr[ k ] = -1;
                }
               // cout<<endl;
            }
            for( int j = x; j <= y ; j++ ){
                if ( j == 1 ) continue;
                if ( pr.count( j ) == 0){
                    cout<<j<<'\n';
                    continue;
                }
            }
        }
    
}

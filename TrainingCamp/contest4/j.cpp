#include <bits/stdc++.h>
using namespace std;

void f( multiset< int > v ){
    for ( multiset< int >::iterator it = v.begin(); it != v.end(); it++ ){
        cout<<(*it)<<" ";
    }
    cout<<endl;
}
void g( set< int > v ){
    cout<<"dd"<<endl;
    for ( set< int >::iterator it = v.begin(); it != v.end(); it++ ){
        cout<<(*it)<<" ";
    }
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int cases;
    cin>>cases;
    for ( int tt = 0 ; tt < cases ; tt++ ){
        int w, h ,n;
        cin>>h>>w>>n;
        vector< int > v1;
        vector< int > v2;
        v1.push_back( 0 );
        v1.push_back( h+1 );
        v2.push_back( 0 );
        v2.push_back( w+1 );

        for ( int i = 0; i < n; i++ ){
            int x,y;
            cin>>x>>y;
            v1.push_back( x );
            v2.push_back( y );
        }
        sort( v1.begin(),v1.end() );
        sort( v2.begin(),v2.end() );
        int maxi1 = 0 , maxi2 = 0;
        for ( int i= 1 ; i < (int)v1.size();i++){
            maxi1 = max( maxi1 , v1[ i ]-v1[i-1] );
        }

        for ( int i= 1 ; i < (int)v2.size();i++){
            maxi2 = max( maxi2 , v2[ i ]-v2[ i- 1 ] );
        }
        cout<<(maxi1-1)*(maxi2-1)<<"\n";
    }
    return 0;
}
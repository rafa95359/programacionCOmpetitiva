#include <bits/stdc++.h>
using namespace std;

map< int, int > M1;
map< int ,int > M2;
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
    int w, h ,n;
    cin>>w>>h>>n;
    set< int > v1,v2;
    multiset< int > c1 , c2;
    v1.insert( 0 );
    v1.insert( h );
    v2.insert( 0 );
    v2.insert( w );

    c1.insert( h );
    c2.insert( w );
    for ( int i = 0 ; i <n ; i++ ){
        char op ;
        int val;
        int x, y;
        cin>>op>>val;
        if ( op == 'H'){
            set< int >::iterator it = v1.lower_bound( val );
            x = (*it)-val;
            it--;
            y = ( val - (*it) );
            
            set< int >::iterator aux;
            aux =  c1.lower_bound( x + y );
            c1.erase( aux );

            c1.insert( x );
            c1.insert( y );
            v1.insert( val );
        }else{
            set< int >::iterator it = v2.lower_bound( val );
            x = (*it)-val;
            it--;
            y = ( val - (*it) );
            
            set< int >::iterator aux;
            aux = c2.lower_bound( x + y );
            c2.erase(  aux);
            c2.insert( x );
            c2.insert( y );
            v2.insert( val );
        }
        set< int > :: iterator it1 = c1.end();
        set< int > :: iterator it2 = c2.end();
        it1--;
        it2--;
        long long ans = (long long)(*it1)*(*it2);
        cout<<ans<<endl;

    }
    return 0;
}

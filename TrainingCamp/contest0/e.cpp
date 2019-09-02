#include<bits/stdc++.h>
using namespace std;
int f( int x ){
    if ( x > 7 ) return 0;
    return x;
}
int main(){
    int cases;
    long long  n,m;
    int v1,v2,v3;
    string p1,p2,p3;
    while ( cin>>v1>>p1>>v2>>p2>>v3>>p3 ){
       if ( v1 == -1 ) break;
       int ans1=0,ans2=0,m1;
       set< string > cur;
       cur.insert( p1 );
       cur.insert( p2 );
       cur.insert( p3 );
    vector< int > r;
    r.push_back( f(v1) );

    r.push_back( f(v2) );

    r.push_back( f(v3) );
    sort( r.begin(),r.end());
       if ( (int)cur.size() == 3 ){
           ans1=max(f(v3),max(f( v1 ),f(v2) ));
           if ( ans1 <= 6 ){
               ans2 = 20+ans1+7;
           }else{
               ans2 = 20+ans1+6;
           }
       }else if ( (int)cur.size() == 2 ){
           if ( p1 == p2 ){
               ans1 = f( v1 )+f(v2)+20;
           }else if ( p1 == p3 ){
               ans1 = f( v1 )+f(v3)+20;
           }else if ( p2 == p3 ){
               ans1 = f( v2 )+f(v3)+20;
           }
           m1=max(f(v3),max(f( v1 ),f(v2) ));
           if ( m1 <= 6 ){
               ans2 = 20+m1+7;
           }else{
               ans2 = 20+m1+6;
           }
       }else{
           ans1 = r[2]+r[1]+20;
           m1=max(f(v3),max(f( v1 ),f(v2) ));
           if ( m1 <= 6 ){
               ans2 = 20+m1+7;
           }else{
               ans2 = 20+m1+6;
           }
       }
       cout<<max(ans2-ans1,0)<<endl;
    }
    
}
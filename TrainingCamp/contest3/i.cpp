#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
long long answer = LLONG_MAX;
long long g( vector< int > v  ){

    long long ans2 = 0;
    int mini = INT_MAX;
    int tami = (int)v.size();
    for ( int i = 0 ; i< (int)v.size(); i++ ){
        mini = min( mini , v[ i ] );
    }
    vector<int>cur;
    for ( int i= 0 ; i < (int)v.size(); i++ ){
        v[ i ]-= mini;
    }
    ans2 += mini;
    for ( int i = 0 ; i < tami; i++ ){
        if ( v[ i ] != 0 ){
            cur.push_back( v[ i ] );
        }else{
            if ( (int)cur.size() > 0 ){
                ans2 += g( cur );
                cur.clear();
            }
        }
    }
    if ( (int)cur.size() > 0 ) ans2 += g( cur );
    ans2 = min( ans2,  (long long)tami );
    return ans2;
}
int main(){
    int n;
    cin>>n;
    vector< int > v( n );
    for ( int i = 0 ; i < n; i++ ){
        cin>>v[ i ];
    }
   
    cout<< g( v  )<<"\n";
}
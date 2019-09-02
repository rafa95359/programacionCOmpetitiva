#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
map< int ,int > M;
map< int ,int > M2;
map< pair< int , int > ,int > M3;
int main(){
    int n;
    cin>>n;
    for ( int i = 0 ; i <n ; i++ ){
        int x,y;
        cin>>x>>y;
         M[x ]++;
         M2[y]++;
        M3[make_pair( x , y ) ]++;
    }
    long long ans = 0;
    for ( map< int , int > :: iterator it = M.begin(); it != M.end();it++ ){
        int a = (*it).second;
        ans +=  (ll)a*(a-1)/2;
    }
     for ( map< int , int > :: iterator it = M2.begin(); it != M2.end();it++ ){
        int a = (*it).second;
        ans +=  (ll)a*(a-1)/2;
    }
    for ( map< pair< int ,int > , int > :: iterator it = M3.begin(); it != M3.end();it++ ){
        int a = (*it).second;
        ans -=  (ll)a*(a-1)/2;
    }


    cout<<ans<<"";

}
    
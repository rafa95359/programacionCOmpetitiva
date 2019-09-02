#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout<<#x<<" => "<<x<<endl;
typedef long long ll ;
ll newVect[100000+1];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    ll taman=0;
    while(cin>>n){
        if(n ==0){
            taman =0;
            cout<<'\n';
            continue;
        }
        if( n > 0){
            newVect[taman++]=n;
            continue;
        }
        ll it =0;
        if(taman%2 == 0){
            it = taman/2-1;
        }else{
            it = taman/2;
        }
        cout<<newVect[it]<<'\n';
        for(ll i = it;i<taman;i++){
            newVect[i] = newVect[i+1];
        }
        taman--;
    }
    return 0;
}
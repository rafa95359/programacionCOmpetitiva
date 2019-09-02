#include <bits/stdc++.h>

#define debug(x) cout<<#x<<" => "<<x<<endl;

#define debugArray(x,n) for(long long i=0;i<n;i++) cout<<#x[i]<<" => "<<x[i]<<endl;

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++){
        ll n;
        cin>>n;
        map<char,ll> ingred;
        for(ll j=0;j<n;j++){
            string aux;
            cin>>aux;
            for(ll k=0;k<aux.size();k++){
                ingred[aux[k]]++;
            }
        }
        cout<<min({ingred['c']/2,ingred['o'],ingred['d'],ingred['e']/2,ingred['h'],ingred['f']})<<endl;
    }
    return 0;
}

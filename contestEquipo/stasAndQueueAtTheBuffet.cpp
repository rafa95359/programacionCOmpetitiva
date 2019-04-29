#include <bits/stdc++.h>

#define debug(x) cout<<#x<<" => "<<x<<endl;

#define debugArray(x,n) for(long long i=0;i<n;i++) cout<<#x[i]<<" => "<<x[i]<<endl;

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,sumA=0,sumB=0;
    cin>>n;
        vector<ll> values;
        for(ll i=0;i<n;i++){
            ll a,b;
            cin>>a>>b;
            sumA+=a;
            sumB+=b;
            values.push_back(a-b);
        }
        sort(values.begin(),values.end());
        ll auxSUm = 0;
        for(ll i=0;i<n;i++){
            auxSUm+=values[i]*(n-i);
        }
        auxSUm-=sumA;
        auxSUm+= n*sumB;
        cout<<auxSUm<<endl;
    
    return 0;
}
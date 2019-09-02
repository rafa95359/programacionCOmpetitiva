#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll exp(ll b, ll e){
    ll ans = 1;
    while(e){
        if(e&1)ans *= b;
        b = b*b; e >>= 1;
    }
    return ans;
}

map<ll, int> F;
void fact(ll n){
    F.clear();
    for(ll p = 2; p*p <= n; p++)
        while(n%p == 0)F[p]++, n /= p;
    if(n > 1)F[n]++;
}

ll CantDiv(ll n){
    fact(n);
    ll ans = 1;
    for(auto f : F)ans *= (f.second + 1);
    return ans;
}

ll SumDiv(ll n){
    fact(n);
    ll ans = 1;
    for(auto f : F){
        ans *= (exp(f.first, f.second+1) - 1)/(f.first-1);
    }
    return ans;
}

ll Phi(ll n){
    fact(n);
    for(auto t : F) n -= n/t.first;
    return n;
}

int main(){
	return 0;
}

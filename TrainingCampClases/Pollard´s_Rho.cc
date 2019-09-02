#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

ll gcd(ll a, ll b){ return a ? gcd(b%a, a) : b; }

ull mulmod(ull a, ull b, ull m){ // 0 <= a, b < m
   long double x; ull c; ll r;
   x = a; c = x * b / m;
   r = (ll)(a * b - c * m) % (ll)m;
   return r < 0 ? r + m : r;
}

ll expmod(ll b, ll e, ll m){
	ll ans = 1;
	while(e){
        if(e&1)ans = mulmod(ans, b, m);
        b = mulmod(b, b, m); e >>= 1;
	}
	return ans;
}

bool is_prime_prob(ll n, int a){
	if(n == a)return true;
	ll s = 0, d = n-1;
	while(d%2 == 0) s++, d /= 2;
	ll x = expmod(a, d, n);
	if((x == 1) || (x+1 == n))return true;
	for(int i = 0; i < s-1; i++){
		x = mulmod(x, x, n);
		if(x == 1)return false;
		if(x+1 == n)return true;
	}
	return false;
}
bool rabin(ll n){ // true iff n is prime
	if(n == 1)return false;
	int ar[] = {2,3,5,7,11,13,17,19,23};
	for(int i = 0; i < 9; i++)if(!is_prime_prob(n, ar[i]))return false;
	return true;
}

ll rho(ll n){
    if(!(n&1))return 2;
    ll x = 2, y = 2, d = 1;
    ll c = rand()%n + 1;
    while(d == 1){
        x = (mulmod(x,x, n)+c)%n;
        y = (mulmod(y,y, n)+c)%n;
        y = (mulmod(y,y, n)+c)%n;
        if(x >= y)d = gcd(x-y, n);
        else d = gcd(y-x, n);
    }
    return d == n ? rho(n) : d;
}
void fact(ll n, map<ll,int>& f){ //O (lg n)^3
	if(n == 1)return;
	if(rabin(n)){ f[n]++; return; }
	ll q = rho(n); fact(q, f); fact(n/q, f);
}

int main(){
	return 0;
}

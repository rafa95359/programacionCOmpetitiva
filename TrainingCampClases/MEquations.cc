#include <bits/stdc++.h>
using namespace std;
#define forr(i, a, b) for(int i = (a); i < (int) (b); i++)
#define forn(i, n) forr(i, 0, n)
typedef long long ll;
typedef unsigned long long ull;


ll gcd(ll a, ll b){return a?gcd(b%a,a):b;}
ull mulmod(ull a, ull b, ull m){ // 0 <= a, b < m
   long double x; ull c; ll r;
   x = a; c = x * b / m;
   r = (ll)(a * b - c * m) % (ll)m;
   return r < 0 ? r + m : r;
}
ll euclid(ll a, ll b, ll& x, ll& y){ // a*(x+k*(b/d))+b*(y-k*(a/d))=d
	if(!b){x=1;y=0;return a;}          // (for any k)
	ll d=euclid(b,a%b,x,y);
	ll t=y;y=x-(a/b)*y;x=t;
	return d;
}
ll inv(ll a, ll m){
    ll x, y, d = euclid(a, m, x, y);
    if(d < 0)x *= -1, y *= -1, d *= -1;
    assert(d == 1);
    return (x%m+m)%m;
}


#define mod(x, m) ((x%m+m)%m)
struct MEq{ /// a*x = b (m)
    ll a, b, m;
    MEq(ll a = 0, ll b = 0, ll m = 0): a(a), b(b), m(m){}
    bool normalize(){
        a = mod(a, m); b = mod(b, m);
        ll d = gcd(a, m); if(b%d)return false;
        a/=d; b/=d; m/=d;
        b = b*inv(a, m)%m; a = 1;
        return true;
    }
};

MEq solve(MEq S, MEq T){
    ll x, y, d = euclid(S.m, -T.m, x, y);
    if((S.b - T.b)%d)return MEq();
    ll M = S.m * (T.m / d), r = (T.b - S.b)/d;
    x = mulmod(x, r, M);
    ll A = mulmod(S.m, x, M) + S.b%M; A = mod(A, M);
    return MEq(1, A, M);
}

MEq solve(vector<MEq> &V){
    queue<MEq> Q;
    for(int i = 0; i < (int)V.size(); i++)Q.push(V[i]);
    while(Q.size() > 1){
        MEq A = Q.front(); Q.pop();
        MEq B = Q.front(); Q.pop();
        MEq X = solve(A, B); if(!X.m) return MEq();
        Q.push(X);
    }
    return Q.front();
}

int main(){
	return 0;
}

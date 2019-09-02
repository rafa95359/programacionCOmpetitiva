#include <bits/stdc++.h>
#define fore(x,a,b) for(int x=a, qwerty=b; x<qwerty; x++)
#define ALL(a) (a).begin(),(a).end()
#define SZ(a) ((int)(a).size())
#define pb push_back
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fst first
#define snd second
using namespace std;
typedef long long ll;

const int N=1005;
class LeftToRightGame{public:
    int n, m;
    int dp[N][N];
    
    int f(int i, int j){
        if(i == n){return i%2 == 1 ? (j == 0) : (j != 0);}
        int &r=dp[i][j];
        if(r!=-1)return r;
        r=0;
        for(int x=(i==0); x<10; x++)
            r|=!f(i+1,(j*10+x)%m);
        return r;
    }
    
    string whoWins(int length, int divisor){
        n=length; m=divisor; memset(dp,-1,sizeof(dp));
        return f(0,0) ? "Alice" : "Bob";
    }
};

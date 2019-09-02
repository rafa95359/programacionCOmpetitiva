#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
typedef long long Long ;
Long dp[10][2];
string s;
Long f(int pos,int lower){
    if(pos == s.size()) return 1;
    Long &ret = dp[ pos] [lower];
    if(ret != -1) return ret;
    ret = 0LL;
    if( !lower){ // el numero formado no es menor que s
        for (Long i=0;i<=( s[pos ] - '0');i++){
            if( i== (s[pos]-'0')) ret+= f(pos+1,lower);
            else ret += f(pos+1,1);
        }
    }
    else {//el numero formado es menor que s
        for( int i=0;i<=9;i++){
            ret += f(pos+1,lower);
        }

    }
    
    return ret;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    s="103";
    memset( dp,-1 ,sizeof(dp));
    cout<<f(0,0)<<endl;
   
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
typedef long long Long ;
Long dp[105][105];
string x,y;

Long LCS(){
    Long n,m;
    n=x.length();
    m=y.length();
    for(Long  i=1;i<=n;i++){
        for(Long j=1;j<=m;j++){
                if(x[i-1]==y[j-1])dp[i][j]=dp[i-1][j-1]+1;
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
        }
        
    }
    return dp[n][m];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long can=1;
    for(Long i=0;i<104;i++){
        dp[i][0]=0;
        dp[0][i]=0;
    }
    while(getline(cin,x) && x[0]!='#'){
        getline(cin,y);
        cout<<"Case #" <<can<<": you can visit at most "<<LCS()<<" cities.\n";
        can++;

    }
    return 0;
}
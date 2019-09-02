#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string a,b;
    cin>>a>>b;
    Long n,m;
    n=a.size();
    m=b.size();
    Long dp[n+5][m+5];
    for(int j=0;j<=m;j++){
        dp[0][j]=0;
    }
    for(int i=0;i<=n;++i){
        dp[i][0]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i-1]==b[j-1])dp[i][j]=1+dp[i-1][j-1];
            else dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
        }
    }
    para(i,1,n+1){
        para(j,1,m+1){
            cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
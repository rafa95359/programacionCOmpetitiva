#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<=n;i++)
#define N 1000000
typedef long long Long ;
Long dp[2005][2005];
string x,y;
Long editDistance(){
    Long n,m;
    n=x.size();
    m=y.size();
    para(i,0,n){
        para(j,0,m){
            if(i==0){
                dp[i][j]=j;
            }else if(j==0){
                dp[i][j]=i;
            }else if(x[i-1]==y[j-1]){
                dp[i][j]=dp[i-1][j-1];
            }else{

                dp[i][j]=1+min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]});
            }
        }
    }
    return dp[n][m];

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    para(i,1,t){
        cin>>x>>y;
        cout<<editDistance()<<"\n";
    }
    return 0;
}
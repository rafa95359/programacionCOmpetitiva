#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
typedef long long Long ;
Long dp[1000][1000];

Long LCS(Long n,Long m,Long x[],Long y[]){
    int i,j;
    for(i=0;i<=n;i++){
        for(j=0;j<=m;j++){
            if(i==0 || j==0){
                dp[i][j]=0;
            }
            else{
                if(x[i-1]==y[j-1])dp[i][j]=dp[i-1][j-1]+1;
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        
    }
    return dp[n][m];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long x[1000],y[1000];
    Long n,m,can=1;
    while(cin>>n>>m,n!=0){
        para(i,0,n){
            cin>>x[i];
        }
        para(j,0,m){
            cin>>y[j];
        }
        cout<<"Twin Towers #" <<can<<"\nNumber of Tiles : "<<LCS(n,m,x,y)<<"\n\n";
        can++;

    }
    return 0;
}
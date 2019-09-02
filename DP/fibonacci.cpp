#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
#define MAX_N 100000
Long dp[MAX_N];

Long fibonacci(Long n){
    if(dp[n])return dp[n];
    dp[n]=fibonacci(n-1)+fibonacci(n-2);
    return dp[n];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    dp[0]=dp[1]=1;
    Long n;
    cin>>n;
    cout<<fibonacci(n)<<"\n";    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000
typedef long long Long ;
Long dp[N][N];
Long comb(Long n,Long k){
    if(n==k || k==1){
        dp[n][k]=1;
        return dp[n][k];
    
    }
    if(dp[n][k])return dp[n][k];
    dp[n][k]=comb(n-1,k-1)+comb(n-1,k);
    return dp[n][k];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    dp[1][1]=dp[2][1]=dp[2][2]=1;
    Long n,k;
    cin>>n>>k;
    cout<<comb(n,k)<<endl;

    return 0;
}
/*#include<bits/stdc++.h> 
using namespace std; 
  
int binomialCoeff(int n, int k) 
{ 
    int C[k+1]; 
    memset(C, 0, sizeof(C)); 
  
    C[0] = 1;  // nC0 is 1 
  
    for (int i = 1; i <= n; i++) 
    { 
        // Compute next row of pascal triangle using 
        // the previous row 
        for (int j = min(i, k); j > 0; j--) 
            C[j] = C[j] + C[j-1]; 
    } 
    return C[k]; 
} 
  
/* Drier program to test above function
int main() 
{ 
    int n = 5, k = 2; 
    printf ("Value of C(%d, %d) is %d ", 
            n, k, binomialCoeff(n, k) ); 
    return 0; 
}  */
#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
typedef long long Long ;
char X[N],Y[N];
int L[1000][1000];
int min(int x, int y, int z) 
{ 
    return min(min(x, y), z); 
} 
  
int editDistDP(string str1, string str2, int m, int n) 
{ 
    // Create a table to store results of subproblems 
    int dp[m+1][n+1]; 
  
    // Fill d[][] in bottom up manner 
    for (int i=0; i<=m; i++) 
    { 
        for (int j=0; j<=n; j++) 
        { 
            // If first string is empty, only option is to 
            // insert all characters of second string 
            if (i==0) 
                dp[i][j] = j;   
            else if (j==0) 
                dp[i][j] = i;
  
            // If last characters are same, ignore last char 
            // and recur for remaining string 
            else if (str1[i-1] == str2[j-1]) 
                dp[i][j] = dp[i-1][j-1]; 
  
            // If the last character is different, consider all 
            // possibilities and find the minimum 
            else
                dp[i][j] = 1 + min(dp[i][j-1],  // Insert 
                                   dp[i-1][j],  // Remove 
                                   dp[i-1][j-1]); // Replace 
        } 
    } 
    para(i,0,m+1){
        para(j,0,n+1){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
  
    return dp[m][n]; 
} 
  
// Driver program 
int main() 
{ 
    // your code goes here 
    string str1 = "bac"; 
    string str2 = "abdc"; 
  
    cout << editDistDP(str1, str2, str1.length(), str2.length()); 
  
    return 0; 
} 
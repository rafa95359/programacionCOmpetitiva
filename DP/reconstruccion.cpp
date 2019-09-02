#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
typedef long long Long ;
char X[N],Y[N];
int L[1000][1000];
/* Returns length of LCS for X[0..m-1], Y[0..n-1] */
int lcs( char *X, char *Y, int m, int n ) 
{ 
    
   int i, j;    
   for (i=0; i<=m; i++) 
   { 
     for (j=0; j<=n; j++) 
     { 
       if (i == 0 || j == 0) 
         L[i][j] = 0; 
   
       else if (X[i-1] == Y[j-1]) 
         L[i][j] = L[i-1][j-1] + 1; 
   
       else
         L[i][j] = max(L[i-1][j], L[i][j-1]); 
     } 
   } 
    para(i,0,m+1){
        para(j,0,n+1){
            cout<<L[i][j]<<" ";
        }
        cout<<endl;
    }
   return L[m][n]; 
} 
void rec(int n,int m){
  if(n==0 || m== 0 ) return;
  if(X[n-1] == Y[m-1]){
    rec(n-1,m-1);
    cout<<X[n-1];
  }
  else{
    if(L[n-1][m]>L[n][m-1]) rec(n-1,m);
    else rec(n,m-1);
  }
}  
/* Utility function to get max of 2 integers */
int max(int a, int b) 
{ 
    return (a > b)? a : b; 
} 
   
/* Driver program to test above function */
int main() 
{ 
  
  cin>>X; 
  cin>>Y;     
   
  int m = strlen(X); 
  int n = strlen(Y); 
   
  printf("Length of LCS is %d\n", lcs( X, Y, m, n ) ); 
  rec(n,m);
  return 0; 
} 
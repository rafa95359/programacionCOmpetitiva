#include <bits/stdc++.h>
 
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<n;i++)


int main() {
   int n;
   cin>>n;
   Long aux=0;
   para(i,n){
      Long a;
      cin>>a;
      aux=aux^a;
      
   }
   cout<<aux;
   
   
    
    
    return 0;
}
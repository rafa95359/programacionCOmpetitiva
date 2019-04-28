#include <bits/stdc++.h>
 
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<n;i++)


int main() {
   Long n;
   cin>>n;
   Long count=0;
   while(n>=2){
      if(n%2==0)count++;
      n=n/2;
      
   }
   Long aux2=pow(2,count);
   cout<<aux2<<endl;;
   
   
    
    
    return 0;
}
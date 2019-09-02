#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
Long expM(Long x,Long n,Long p){
    Long ans = 1;
    x%=p;
    while ( n ){
        if( n & 1 )ans = ( ans * x )%p;
        x = (x*x)%p;
        n >>= 1;
    }
    return ans;
}
Long  power(Long a,Long b,Long c){
 Long temp=1,aux=a;
 while(b>0) {
  if(b & 1){
   temp=(temp*aux)%c;
   
  }
  aux=(aux*aux)%c;
  b>>=1;
  cout<<b<<" "<<temp<<" "<<aux<<endl;
 }
 return temp;
}
int main(){
    cout<<power(3,10,10000000);
}
  
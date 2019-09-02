#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
Long  power(Long a,Long b,Long c){
 Long temp=1,aux=a;
 while(b>0) {
  if(b & 1){
   temp=(temp*aux)%c;
  }
  aux=(aux*aux)%c;
  b>>=1;
 }
 return temp;
}
  
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long t;
    cin>>t;
    
    while(t--){
        Long n,p;
        cin>>n>>p;
        if(n>=p){
            cout<<0<<"\n";
        }
        
        int m=p-n-1;
        Long arr[m+1];
        arr[1]=1;
        para(i,2,m+1){
            arr[i]=(arr[i-1]*i)%p;
            //cout<<arr[i]<<"\n";
        }
        
        Long resultado;
        Long temp=power(arr[m],p-2,p);
        if(m&1)resultado=power(arr[m],p-2,p);
        else resultado=power(p-arr[m],p-2,p);
    
        cout<<resultado<<"\n";
    }
    return 0;
}
// 2 5 
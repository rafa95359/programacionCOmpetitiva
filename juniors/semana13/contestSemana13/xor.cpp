#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(Long i=a;i<n;i++)
typedef long long Long ;

Long n, k;
Long resp(Long indice, Long limite, Long ac,Long x[]) {    
    if (indice == n){        
       return  limite == k ? ac: -1;      
    }
    Long t = resp(indice+1, limite, ac,x);
    if (limite < k) t = max(t, resp(indice+1, limite+1, ac^ x[indice],x));   
    return t;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long t; 
    cin>>t;
    para(i,0,t) {
      cin>>n>>k;
      Long x[n];
      para(i,0,n){
        cin>>x[i];
      }
      cout<<resp(0,0,0,x)<<endl;
    }
    return 0;
}
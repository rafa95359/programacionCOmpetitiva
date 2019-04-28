#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
int main(){
    Long n;
    cin>>n;
    Long a[n];
    para(i,n){
        cin>>a[i];
    }
    sort(a,a+n);
    Long resp=a[n-1];    
    if(a[0]+a[1]<=a[n-1])cout<<resp;
    else{
        
        
    }
    return 0;
}

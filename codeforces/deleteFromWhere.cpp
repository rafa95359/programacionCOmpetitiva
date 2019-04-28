#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
int main(){
    string a,b;
    cin>>a>>b;
    Long n=a.size(),m=b.size();
    Long max=min(n,m);
    Long resp=0;
    for(Long i=0;i<max;i++){
        if(a[n-i-1]==b[m-i-1])resp++;
        else{
            break;
        }
    }    
    cout<<m+n-2*resp;

    return 0;
}

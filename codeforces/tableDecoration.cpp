#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
int main(){
    Long a[3];
    
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    a[2]=min(2*a[0]+2*a[1],a[2]);

    cout<<a[0]+(a[2]-2*a[0]+a[1])/3<<endl;

    return 0;
}

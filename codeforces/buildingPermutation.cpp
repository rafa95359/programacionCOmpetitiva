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
    Long resp=0;
    para(i,n){
        resp+=abs(a[i]-i-1);
    }
    cout<<resp;
    return 0;
}

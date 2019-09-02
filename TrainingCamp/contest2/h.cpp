#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
int main(){
    Long n;
    cin>>n;
    Long respu=0;
    para(i,1,n){
        respu+=i*(n-i);
    }
    cout<<respu+n;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
Long BigMod(Long b,Long p,Long m){
    if(p==0){
        return 1;
    }
    Long part=BigMod(b,p/2,m);
    if(p%2==0){
        return (part*part)%m;
    }else return ((part*part)%m)*b%m;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long b,p,m;
    while(cin>>b>>p>>m){
        cout<<BigMod(b,p,m)<<endl;
    }
    return 0;
}
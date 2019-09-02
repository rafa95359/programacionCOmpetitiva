#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
typedef long long Long ;
Long value(Long a,Long b,Long  c ){
    Long med=(a+b+c)/2;
    return med;
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long n;
    cin>>n;
    para(i,0,n){
        Long a,b,c;
        cin>>a>>b>>c;
        cout<<value(a,b,c)<<endl;
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long q;
    cin>>q;
    para(i,0,q){
        Long n,a,b;
        cin>>n>>a>>b;
        Long resp=min((n/2)*b,(n/2)*2*a);
        cout<<resp+(n%2==0 ? 0:a)<<endl;
        
    }
        return 0;
}   
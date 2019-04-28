#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long a,b,c,d,x,y;
    cin>>a>>b>>c>>d>>x>>y;    
    Long minus=min({a,b,c,d});
    if(minus-1>=x){
        if(minus-1<=y){
            cout<<minus-x<<endl;
        }else{
            cout<<y-x+1<<endl;
        }
        
    }
    else{
        cout<<0<<endl;
    }
    
    return 0;
}
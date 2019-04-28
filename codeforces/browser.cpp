#include <bits/stdc++.h>
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
using namespace std;


int main(){
    int n,pos,l,r;
    cin>>n>>pos>>l>>r;

    
    if(l!=1 && r!= n){
        cout<<min(abs(pos-l)+r-l,abs(r-pos)+r-l)+2<<endl;
        return 0;
    }
    if(l==1 && r==n){
        cout<<0<<endl;
    }
    if(r!=n){
        cout<<abs(r-pos)+1<<endl;
    }
    if(l!=1){
        cout<<abs(pos-l)+1<<endl;
    }

    
    


    return 0;
}

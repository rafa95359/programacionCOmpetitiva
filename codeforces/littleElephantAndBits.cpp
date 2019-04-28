#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
int main(){
    string c;
    cin>>c;
    Long n=c.size();
    para(i,n){
        if(c[i]=='0'){
            c.erase(c.begin()+i);
            break;
        }
    }
    if(n==c.size()){
        c.erase(c.begin());
    }
    cout<<c<<endl;
    

    return 0;
}

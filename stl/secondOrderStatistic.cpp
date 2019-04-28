#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
int main(){
    Long n;
    cin>>n;
    set<Long>num;

    para(i,n){
        Long ayx;
        cin>>ayx;
        num.insert(ayx);
    }
    if(num.size()>1){
        cout<<*++num.begin();
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}

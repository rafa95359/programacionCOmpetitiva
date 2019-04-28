#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
int main(){
    set<Long> tabas;
    para(i,4){
        Long a;
        cin>>a;
        tabas.insert(a);
    }
    cout<<4-tabas.size()<<endl;

    return 0;
}

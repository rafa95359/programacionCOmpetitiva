#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
int main(){
    Long q;
    cin>>q;
    set <Long> num;
    para(i,q){
        Long aux;
        cin>>aux;
        if(aux==1 || aux==2){
            Long n;
            cin>>n;
            if(aux==1)num.insert(n);
            if(aux==2)num.erase(n);

        }
        if(aux==3){
            cout<<*num.begin()<<endl;
        };
    }
    return 0;
}

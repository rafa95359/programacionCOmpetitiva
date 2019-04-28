#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
int main(){
    Long n;
    cin>>n;
    set <Long> num;

    para(i,n){
        Long aux,val;
        cin>>aux>>val;
        if(aux==1){
            num.insert(val);
        }
        if(aux==2){
            num.erase(val);
        }
        if(aux==3){
            if(num.count(val)!=0)cout<<"Yes"<<endl;
            else{
                cout<<"No"<<endl;
            }
        }
        
    }
    return 0;
}

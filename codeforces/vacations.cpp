#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
int main(){
    Long n;
    cin>>n;
    Long prev=-1,resp=0;
    
    
    para(i,n){
        Long t;
        cin>>t;
        if(t==0){
            resp++;
            prev=t;
            continue;
        }
        
        if(t==1){
            if(prev==1){
                resp++;
                prev=0;
                continue;
            }
            prev=t;
            continue;
        }
        if(t==2){
            if(prev==2){
                resp++;
                prev=0;
                continue;
            }
            prev=t;
            continue;
        }
        if(t == 3){
            if(prev==1){
                prev=2;
                continue;
            }
            if(prev==2){
                prev=1;
                continue;
            }
            if(prev==0 || prev==3){
                prev=3;
            }
        }        

    }
    cout<<resp<<endl;
    return 0;
}

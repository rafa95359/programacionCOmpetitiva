#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)

int main(){
    Long n;
    cin>>n;    
    para(k,n){
        Long t;
        cin>>t;
        Long arr[t];
        para(m,t){
            cin>>arr[m];
        }
        bool correcto=true;
        para(i,t/2){            
            if(arr[i]!=arr[t-i-1] || arr[i+1]>arr[i]+1 ){
                correcto=false;
                break;
            }
            
            if(arr[0]!=1 || arr[t/2]!=7){
                correcto=false;
            }

        }
        if(correcto)cout<<"yes"<<endl;
        else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}

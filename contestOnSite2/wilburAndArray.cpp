#include <bits/stdc++.h>
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
using namespace std;

int main(){
    Long n;
    cin>>n;
    Long arr[n];
    Long pasos=0;
    para(i,n){
        cin>>arr[i];
    }
    Long dif=0;
    Long can=0;
    para(i,n){
        if(arr[i]+dif!=0){
            can += abs(arr[i]+dif);
            dif+=(arr[i]+dif)*-1;
                        
        }
    }
    cout<<can<<endl;

    return 0;
}
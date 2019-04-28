#include <bits/stdc++.h>
typedef long long Long;

using namespace std;
int main(){
    Long n;
    cin>>n;
    Long mayor=0,cant=0;
    for (Long i=0;i<n;i++){
        Long t;
        cin>>t;
        if(t > mayor){
            mayor=t;
            cant=0;
        }    
        if(t == mayor)cant++;
        
    }
    cout <<cant<<endl;
    return 0;
}

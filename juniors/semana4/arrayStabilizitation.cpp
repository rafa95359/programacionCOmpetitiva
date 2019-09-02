#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)


int main(){
    Long n;
    cin>>n;
    Long  num[n];
    para(i,n){
        cin>>num[i];
    }
    sort(num,num+n);   
    if(n>2){
        cout<<min(num[n-2]-num[0],num[n-1]-num[1])<<endl;
    }
    else{
        cout<<0<<endl;
    }   
    
    return 0;
}

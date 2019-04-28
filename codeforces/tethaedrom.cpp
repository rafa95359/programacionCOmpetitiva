#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
int main(){
    Long n;
    cin>>n;

    Long resp=1;    
    if(n==1){
        cout<<0<<endl;
    }
    else{

    para(i,n-2){
        if((i+1)%2==0){
            resp=(resp%1000000007)*3+1;

        }
        else{
            resp=(resp*3%1000000007)-1;
        }
    }
    cout<<(resp*3)%1000000007<<endl;
    }
    return 0;    
}

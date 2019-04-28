#include <bits/stdc++.h>
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0,b;
    para(i,n){
        cin>>b;
        if(b-a>15){
            if(a+15<=90){
                cout<<a+15;    
                return 0;            
            }
            else{
                cout<<90<<endl;
                 return 0;
            }
        }
        
        a=b;
    }
    if(b+15<90){
        cout<<b+15<<endl;
    }
    else{
        cout<<90<<endl;
    }
    
    return 0;
}

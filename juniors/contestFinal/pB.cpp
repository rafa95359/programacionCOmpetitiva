#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
Long resp(Long a){
    Long x=0,y=0,z=0;
    if(a==1)return 0;
    while(a>1){
        if(a%2!=0 && a%3!=0 &&a%5!=0)break;
        if(a%2==0){
            a/=2;
            x++;
        }
        if(a%3==0){
            a/=3;
            y++;
        }
        if(a%5==0){
            a/=5;
            z++;
        }
    }
    if(a!=1)return -1;
    return x+2*y+3*z;
   
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long t;
    cin>>t;
    para(i,0,t){
        Long a;
        cin>>a;
        cout<<resp(a)<<endl;
        
    }
    return 0;
}
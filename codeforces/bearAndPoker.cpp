#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
Long gcd (Long a, Long b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}
bool Sies(Long n){
    while(n%2==0){
        n=n/2;
    }
    while (n%3==0){
        n=n/3;
    }
    if(n==1)return true;
    return false;
}
int main(){
    Long n;
    cin>>n;
    Long a[n];
    para(i,n){
        cin>>a[i];
    }
    Long mcd=gcd(a[0],a[1]);
    para(i,n-2){
        mcd = gcd(mcd,a[i+2]);
    }
    para(i,n){
        a[i]=a[i]/mcd;
    }
    
   
    para(i,n){
        if(!Sies(a[i])){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
Long sumaDeDigitos(Long n){
    Long suma=0;
    while(n>0){
        suma+=n%10;
        n/=10;
    }
    return suma;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long a,b,c;
    cin>>a>>b>>c;
    set<Long> arr;
    para(i,0,81){        
        Long x = b * pow(i,a)+c;        
        if(sumaDeDigitos(x)==i && x>0 && x<1e9){
            arr.insert(x);
        }
        if(x>1e9)break;
    }
    cout<<arr.size()<<endl;
    for(auto x:arr){
        cout<<x<<" ";
    }
    return 0;
}   
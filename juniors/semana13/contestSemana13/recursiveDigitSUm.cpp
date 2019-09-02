#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
Long sumar(Long n){
    if(n>0){
        return n%10+sumar(n/10);        
    }
    return 0;
    
}
Long sumDigits(Long n){
    if(n<=9)return n;
    return sumDigits(sumar(n));

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string n;
    cin>>n;
    Long k;
    cin>>k;
    Long suma=0;
    para(i,0,n.size()){
        suma+=n[i]-'0';

    }

    cout<<sumDigits(suma*k)<<endl;
    
    return 0;
}

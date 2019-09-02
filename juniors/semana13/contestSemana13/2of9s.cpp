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
Long proDigits(Long n){
    if(n>9)return 1+proDigits(sumar(n));
    return 0;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string n;
    while(cin>>n,n!="0"){
        Long suma=0,can=0;
        para(i,0,n.size()){
            suma+=n[i]-'0';
        }
        if(suma%9==0){
            can++;
            can+=proDigits(suma);
        }
        if(can>0)cout<<n<<" is a multiple of 9 and has 9-degree "<<can<<"."<<endl;
        else cout<<n<<" is not a multiple of 9."<<endl;
    
    }
    
    return 0;
}

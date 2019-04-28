#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
int main(){
    Long n;
    cin>>n;
    
    Long digitos=(n-1)/7+1;
    Long digitosMax=(n-1)/4+1;
    Long cuatro=digitos;    
    Long siete=0;
    Long suma=4*cuatro+7*siete;
    while(digitos <= digitosMax && suma!=n){
        if(cuatro==0){
            digitos++;
            cuatro=digitos;
            siete=0;
        }else{
            cuatro--;
            siete++;
        }        
        if(suma != n){
            suma=4*cuatro+7*siete;            
        }
    }
    
    if(suma==n){
        para(i,cuatro)cout<<4;
        para(i,siete)cout<<7;
    }else{
        cout<<-1<<endl;
    }
    
    return 0;
}

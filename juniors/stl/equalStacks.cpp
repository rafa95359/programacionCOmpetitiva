#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
Long sonIguales(Long a,Long b,Long c){
    if(a==b && a==c)return 0;
    if(a>=b && a>=c)return 1;
    if(b>=a && b>=c)return 2;
    else return 3;

}
int main(){
    Long a,b,c,sumA=0,sumB=0,sumC=0;
    cin>>a>>b>>c;
    queue <Long> colaA,colaB,colaC;
    para(i,a){
        Long aux;
        cin>>aux;
        colaA.push(aux);
        sumA+=aux;
    }
    para(i,b){        
        Long aux;
        cin>>aux;
        colaB.push(aux);
        sumB+=aux;
    } 
    para(i,c){        
        Long aux;
        cin>>aux;
        colaC.push(aux);
        sumC+=aux;
    } 
    while(sonIguales(sumA,sumB,sumC)){       
        switch (sonIguales(sumA,sumB,sumC))
        {
            case 1:
                sumA-=colaA.front();                
                colaA.pop();
                break;
            case 2:
                sumB-=colaB.front();               
                colaB.pop();
                break;
            default:
                sumC-=colaC.front();                
                colaC.pop();
                break;
        }
    }
    cout<<sumA<<endl;
    return 0;
}

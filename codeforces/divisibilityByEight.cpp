#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
bool esMultiplo(int a,int b, int c){    
    Long num=c*100+b*10+a;
    if(num%8==0){
        return true;
    }
    else{return false;}
}
int main(){
    string c;
    cin>>c;
    Long n = c.size();
    Long pos=-1;
    Long pos2=-1;
    Long pos3=-1;
    Long uno,dos,tres;
    bool esPosible3=false;
    bool esPosible2=false;
    bool esPosible1=false;

    
    for(Long i=0;i<n;i++){
        bool seguimos=true;
        if((c[n-1-i]-'0')%8==0 && !esPosible1){            
            pos3=n-1-i;
            esPosible1=true;
        }
        for(Long j=i+1;j<n &&seguimos;j++){
            if(esMultiplo(c[n-1-i]-'0',c[n-1-j]-'0',0)){
                esPosible2=true;
                if(n-1-j>pos2){
                    tres=n-1-i;
                    pos2=n-1-j;                    
                }                    
            }
            for(Long k=j+1;k<n && seguimos;k++){
                if(esMultiplo(c[n-1-i]-'0',c[n-1-j]-'0',c[n-1-k]-'0')){
                    esPosible3=true;
                    if(n-1-k>pos){
                        uno=n-1-i;
                        dos=n-1-j;
                        pos=n-1-k;
                    }
                    seguimos=false;
                }
            }
        }
    }
    if(esPosible3){
        cout<<"YES"<<endl;
        para(i,pos){
            cout<<c[i];
        }
        cout<<c[pos]<<c[dos]<<c[uno];   
    }
    if(!esPosible3 && esPosible2){    
        cout<<"YES"<<endl; 
        cout<<c[pos2]<<c[tres];
    }
    if(!esPosible3 && !esPosible2 &&  esPosible1){
        cout<<"YES"<<endl;
        cout<<c[pos3];
    }   
    if(!esPosible3 && !esPosible2 &&  !esPosible1)cout<<"NO"<<endl;
    
    
    

    return 0;
}

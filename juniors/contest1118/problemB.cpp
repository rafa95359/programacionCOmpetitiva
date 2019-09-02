#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long n,sumPar=0,sumImpa=0;
    cin>>n;
    vector<Long> x;
    para(i,0,n){
        Long aux;
        cin>>aux;
        x.push_back(aux);
        if(i%2==0){           
            sumPar+=aux;
        }else{            
            sumImpa+=aux;
        }
    }

    if(n==1){
        cout<<1<<endl;
        return 0;
    }else{
        Long resp=0;
        Long acuPar=0,acuImpar=0;
        para(i,0,n){
            Long par,impar;
            if(i%2==0){
                par=sumImpa+acuPar-acuImpar;
                impar=sumPar+acuImpar-acuPar-x[i];
                acuPar+=x[i];
            }else{
                par=sumImpa+acuPar-acuImpar-x[i];
                impar=sumPar+acuImpar-acuPar;
                acuImpar+=x[i];
            }
        
            
            if(par==impar)resp++;
            
        }
        cout<<resp;
    }
    return 0;
}
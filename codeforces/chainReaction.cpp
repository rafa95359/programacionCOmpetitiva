#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
Long pos[1000009][2];
Long verde[1000009];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long n;
    cin>>n;   
    Long max=0,minus=1000009;
    
    para(i,n){
        Long aux,pot;
        cin>>aux>>pot;
        pos[aux][0]++;          
        pos[aux][1]=pot;
        if(aux>max)max=aux; 
        if(aux<minus)minus=aux;     
    }

    for(Long i=0;i<max;i++){
        pos[i+1][0]+=pos[i][0];
    }    

    Long can=0;
    for(Long i=minus;i<max;i++){        
        if(pos[i][0]!=pos[i+1][0]){                    
            can++;            
            Long distancia=i+1-pos[i+1][1];            
            if(distancia>0){                             
                verde[can]=pos[i+1][0]-pos[distancia-1][0]-1+verde[pos[distancia-1][0]-1];      
                          
            }else{
                verde[can]=can;
            }              

        }
    }   
    Long min=verde[n-1];
    
    for(Long i=n;i>0;i--){
        Long eliminado=verde[i-1]+n+1-i;
        if(eliminado<min)min=eliminado;
        if(n-i>min)break;
    }
    cout<<min<<endl;
    
    return 0;
}

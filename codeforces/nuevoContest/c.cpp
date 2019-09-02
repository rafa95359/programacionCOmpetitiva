#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long t;
    cin>>t;
    map<Long,Long> valores;
    map<Long,Long> it;
    
    para(i,1,10){
        Long suma=i;
        Long actual=i*2;
        it[i]=1;
        while(actual%10!=i){
            it[i]++;
            suma+=actual%10;
            actual+=i;
        }
        valores[i]=suma;
    }
    /*para(i,1,10){
        cout<<valores[i]<<" "<<it[i]<<endl;
    }*/
    para(y,0,t){
        Long n,m;
        cin>>n>>m;
        if(m%10==0){
            cout<<0<<endl;
            continue;
        }
        Long cant=n/m;        
        Long value=m%10;
        Long ciclos=cant/it[value];
        Long resp=ciclos*valores[value];
        Long hasta=cant-ciclos*it[value];
        Long aux=value;
        for(Long i=0;i<hasta;i++){            
            resp+=value%10;
            value+=aux;
        }
        cout<<resp<<endl;
        

    }
    return 0;
}
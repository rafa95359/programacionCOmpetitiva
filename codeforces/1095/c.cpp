#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
typedef long long Long ;
map<Long,Long> pot;

void aument(Long valor,Long k){    
    if(k==2){
        pot[valor/2]+=2;
        return;
    }
    if(k==1){
        pot[valor]++;
        return;
    }
    if(k%2==0){
        aument(valor/2,k/2);
        aument(valor/2,k/2);
    }else{
        aument(valor/2,k/2);
        aument(valor/2,k/2+1);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long n,k;
    cin>>n>>k;
    Long con=__builtin_popcount(n);
    Long aux=n;
    Long it=0;
    while(aux!=0){
        Long i=aux&1;
        aux=aux>>1;
        if(i==1){
            pot[pow(2,it)]++;
                        
        }
        it++;
    }
    
    if(k<con || k>n)cout<<"NO"<<endl;
    else{
        auto it=pot.begin();
        cout<<"YES"<<endl;
        //cout<<k<<" "<<con<<endl;
        while(k-con>0){
            Long value=it->first;
            //cout<<value<<endl;
            if(value!=1 && pot[value]!=0){
                if(value+con-1<=k){
                    con--;
                    con+=value;
                    pot[1]+=value;
                    pot[value]--;
                }else{
                    Long falta=k-(con-1);
                    //cout<<value<<" "<<falta<<endl;
                    pot[value]--;
                    aument(value,falta);
                    break;
                }
            }
            it++;
        }

        for(auto r:pot){
            Long can=r.second;
            para(n,0,can){
                cout<<r.first<<" ";
            }
        }
        

    }
    

            

    
    return 0;
}



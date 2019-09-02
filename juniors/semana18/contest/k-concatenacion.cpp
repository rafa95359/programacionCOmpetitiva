#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
typedef long long Long ;
struct Data{
    Long ans,prefMax,sufMax,sum;
    Data(){};
    Data(Long x){
        ans=prefMax=sufMax=sum=x;
    };
};
Data combine(Data l,Data r){
    Data d;
    d.sum=l.sum+r.sum;
    d.prefMax=max(l.prefMax,l.sum+r.prefMax);
    d.sufMax=max(r.sufMax,r.sum+l.sufMax);
    d.ans=max(max(l.ans,r.ans),l.sufMax+r.prefMax);
    return d;
}
Data maxArray(Long l,Long r,vector<Long> &v){
    if(l==r){
        return Data(v[l]);
    }
    Long med=(l+r)/2;
    Data prefMax=maxArray(l,med,v);
    Data suFMax=maxArray(med+1,r,v);
    return combine(prefMax,suFMax);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long t;
    cin>>t;
    para(i,0,t){
        Long n,k;
        cin>>n>>k;
        vector<Long> arr;
        para(j,0,n){
            Long aux;
            cin>>aux;
            arr.push_back(aux);
          
        }
        Data respuesta=maxArray(0,n-1,arr);
        if(k>1){
            Long resp=max(respuesta.ans,respuesta.sufMax+respuesta.prefMax);
            if(k>=3){
                resp=max(resp,(k-2)*respuesta.sum+respuesta.prefMax+respuesta.sufMax);
            
            }
            cout<<resp<<endl;

        }else{
            cout<<respuesta.ans<<endl;
        }
        
    }
    return 0;
}
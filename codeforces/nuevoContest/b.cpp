#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long n,m;
    cin>>n>>m;
    multiset<pair<Long,Long>> cantidad;
    para(i,0,n) {
        Long aux;
        cin>>aux;
       Long m=__builtin_clz(aux);
       //cout<<m<<endl;
       pair<Long,Long> arr;
       arr.second=32-m;
       arr.first=(aux<<m);
       //cout<<arr.first<<endl;
       //cout<<arr.second<<endl;
       cantidad.insert(arr);
    }
    vector<Long> operaciones;
    auto it1=cantidad.begin();
    auto it2=it1;
    it2++;
    para(i,0,n-1){
        it2=it1;
        it2++;
        Long valor1=it1->first;
        Long valor2=it2->first;
        Long contador=0;
        Long limite=min(it1->second,it2->second);
        for(Long j=31;j>31-limite;j--){
            if(valor1&(1<<j)==valor2&(1<<j)){
                contador++;
            }else{
                contador=it1->second+it2->second-2*contador;
                operaciones.push_back(contador);
                break;
            }
        }
        it1=it1++;
    }
    
    vector<Long> sumParciales;
    
    sumParciales.push_back(operaciones[0]);    
    para(i,1,operaciones.size()){
        sumParciales.push_back(sumParciales[i-1]+operaciones[i]);
    }
    Long minResp=sumParciales[m-1];
    para(i,1,sumParciales.size()-m+1){
        minResp=min(sumParciales[i+m]-sumParciales[i-1],minResp);
    }
    cout<<minResp<<endl;

    return 0;
}
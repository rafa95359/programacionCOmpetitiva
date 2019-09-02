#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long n;
    cin>>n;
    vector<Long> par,impar;
    para(i,0,n){
        Long aux;
        cin>>aux;
        if(aux%2==0){
            par.push_back(aux);
        }else{
            impar.push_back(aux);
        }
    }
    sort(par.begin(),par.end());
    sort(impar.begin(),impar.end());
    Long v1=1e14;
    Long m=min(par.size(),impar.size());
    Long resp=0;
    if(m==par.size() ){
        para(j,0,impar.size()-m-1){
            resp+=impar[j];
        }
    }else{
         para(j,0,par.size()-m-1){
            resp+=par[j];
        }
    }
    cout<<resp<<endl;


    return 0;
}
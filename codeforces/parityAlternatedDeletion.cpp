#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long n,sum=0;
    cin>>n;
    priority_queue<Long>par,impar;
    para(i,0,n){
        Long aux;
        cin>>aux;
        sum+=aux;
        if(aux%2==0){
            par.push(aux);
        }else impar.push(aux);
    }
    while(par.size()>0 && impar.size()>0){
        sum-=par.top();
        sum-=impar.top();
        par.pop();
        impar.pop();
    }
    if(impar.size()>0){
        sum-=impar.top();
    }
    if(par.size()>0){
        sum-=par.top();
    }
    cout<<sum<<endl;
    
    return 0;
}
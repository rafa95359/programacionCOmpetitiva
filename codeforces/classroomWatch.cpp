#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
Long sumaDeCifras(Long n){
    Long sum=0;
    while(n>0){
        sum+=n%10;
        n=n/10;
    }
    return sum;
}
int main(){
    Long n,aux;
    cin>>n;
    aux=n;

    vector<Long> resp;
    para(i,90){
        aux--;
        if(aux+sumaDeCifras(aux) == n){
            resp.push_back(aux);
            
        }
        if(aux==0){
            break;
        }
    }
    if(resp.size()==0)cout<<0<<endl;
    else{
        cout<<resp.size()<<endl;
        sort(resp.begin(),resp.end());
        para(i,resp.size()){
            cout<<resp[i]<<endl;
        }
    }
    
    return 0;
}

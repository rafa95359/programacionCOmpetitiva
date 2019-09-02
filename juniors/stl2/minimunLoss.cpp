#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
int main(){
    Long n;
    cin>>n;
    vector<Long> price;
    set<Long>price2;
    para(i,n){
        Long aux;
        cin>>aux;
        price.push_back(aux);
        price2.insert(aux);
    }
    Long min=1e17;
    
    for(Long i=0;i<n-1;i++){
        price2.erase(price[i]);
        auto it=price2.upper_bound(price[i]);
        if(it==price2.begin()){
            continue;
        }
        --it;
        if(price[i]-*it<min ){
            min=price[i]-*it;
        }
    }
    cout<<min;
    return 0;
    
}
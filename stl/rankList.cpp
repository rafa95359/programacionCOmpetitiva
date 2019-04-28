#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)

struct classcomp {
  bool operator() (const pair<Long,Long>& lhs, const pair<Long,Long>& rhs) const {
      if(lhs.first < rhs.first || (lhs.first == rhs.first && lhs.second>rhs.second))return false;
      return true;
      
    }
};
int main(){
    Long n,k;
    cin>>n>>k;
    multiset<pair<Long,Long>,classcomp> puntaje;
    para(i,n){      
        pair<Long,Long> pun;
        cin>>pun.first>>pun.second;
        puntaje.insert(pun);        
    }    
    
    auto it=puntaje.begin();    
    auto it2=it;
    Long puesto=0;
    Long resp;
    while(puesto<k){
        Long can=0;        
        while(it->first == it2->first && it->second==it2->second){            
            can++;
            it2++;
            puesto++;
        }
        it=it2;
        if(puesto>=k){
            resp=can;
        }


    }

    cout<<resp<<endl;
    return 0;
}

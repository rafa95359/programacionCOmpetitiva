#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
int main(){
    Long n;
    cin>>n;
    map<string,Long> amantes;
    para(i,n){
        string aux;
        cin>>aux;
        amantes[aux]++;
        getline(cin,aux);
        
    }
    for(auto x:amantes){
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}
    
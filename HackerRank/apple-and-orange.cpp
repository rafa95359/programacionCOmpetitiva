#include <bits/stdc++.h>
typedef long long Long;

using namespace std;
int main(){
    Long casa_iz,casa_der,manzanas,naranjas,m,n;
    cin>>casa_iz>>casa_der>>manzanas>>naranjas>>m>>n;
    Long manza_dentro=0,naranjas_dentro=0;
    for( Long i=0;i<m;++i){
        Long t;
        cin>>t;
        if(t+manzanas>=casa_iz && t+manzanas<=casa_der)manza_dentro++;
    }
    for( Long i=0;i<n;++i){
        Long t;
        cin>>t;
        if(t+naranjas>=casa_iz && t+naranjas<=casa_der)naranjas_dentro++;
    }
    cout<<manza_dentro<<endl;
    cout<<naranjas_dentro;

    return 0;
}

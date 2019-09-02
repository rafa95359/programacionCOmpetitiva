#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
typedef long long Long ;
Long n,m,k,f;
struct classcomp { bool operator() (const pair <string,Long>& lhs, const pair<string,Long>& rhs) const {
      if(lhs.second > rhs.second || (lhs.second == rhs.second && lhs.first<rhs.first))return true;
      return false;}
};
map<string,Long> puntaje,clasificados;
vector<string> partidos[2];
vector<string> equipos;
Long posibilities=0;
void backTraking(Long i){
    if(i==m){
        posibilities++;
        Long ll=0;
        set<pair<string,Long>,classcomp> ordenado(puntaje.begin(),puntaje.end());
       for(auto x: ordenado){
           if(ll==k)break;
           clasificados[x.first]++;
           ll++;
       }
       return; 
    } 
    puntaje[partidos[0][i]]+=3;
    backTraking(i+1);
    puntaje[partidos[0][i]]-=3;
    puntaje[partidos[1][i]]+=3;
    backTraking(i+1);
    puntaje[partidos[1][i]]-=3;
    puntaje[partidos[0][i]]+=1;
    puntaje[partidos[1][i]]+=1;
    backTraking(i+1);
    puntaje[partidos[0][i]]-=1;
    puntaje[partidos[1][i]]-=1;      

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>m>>k>>f;
    para(i,0,n){
        Long p;
        string e;
        cin>>e>>p;
        equipos.push_back(e);
        puntaje[e]=p;
    }
    para(i,0,m){
        string a,b;
        cin>>a>>b;
        partidos[0].push_back(a);
        partidos[1].push_back(b);
    }
    backTraking(0);    
    para(i,0,n){
        Long resp=(clasificados[equipos[i]]*f)/posibilities;
        cout<<equipos[i]<<" : "<<resp<<endl;
    }
    return 0;
}
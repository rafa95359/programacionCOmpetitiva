#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(Long i=a;i<n;i++)
typedef long long Long ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long t;
    cin>>t;
    map<char,Long> vocal={{'a',16},{'e',8},{'i',4},{'o',2},{'u',1}};
    para(i,0,t){
        Long n;
        cin>>n;
        Long mapa[32]={0};
        para(j,0,n){
            string aux;
            cin>>aux;
            set<char> x;
            para(k,0,aux.size()){
                x.insert(aux[k]);
            }
            Long sum=0;
            for(auto k:x){
                sum+=vocal[k];
            }
            mapa[sum]++;
        }
        
        Long resp=0;
        para(k,1,31){
            para(j,k+1,32){                
                if((j|k) == 31)resp+=mapa[k]*mapa[j];
            }
        }
        resp+=mapa[31]*(mapa[31]-1)/2;
        cout<<resp<<endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
Long maxvector( bool  cn[],Long tam){
    Long maxAux = 0LL;
    auto itMin =0;
    for (Long  i=1;i<tam;i++){
        if(cn[i]){
            maxAux = max(maxAux,i-itMin);
            itMin = i;
        }
    }
    return maxAux;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long w,h,n;
    cin>>w>>h>>n;
    bool isOcupX[w+1],isOcupY[h+1];
    for(Long a=0;a<w+1;a++) isOcupX[a] = false;
    for(Long a=0;a<h+1;a++) isOcupY[a] = false;
    isOcupX[0] = true;
    isOcupX[w] = true;
    isOcupY[0] = true;
    isOcupY[h] = true;
    Long maxNowX = w,maxNowY = h;
    for(Long i=0;i<n;i++){
        char aux;
        Long valu;
        cin>>aux>>valu;
        if(aux == 'H'){
            isOcupY[valu] = true;
            maxNowY = maxvector(isOcupY,h+1);
        }else{
            isOcupX[valu] = true;
            maxNowX = maxvector(isOcupX,w+1);
        }
        cout<<maxNowX*maxNowY<<endl;
    }
    return 0;
}
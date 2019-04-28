#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
Long matriz[505][505];
int main(){
    Long n,m,k;
    cin>>n>>m>>k;
    bool menor=true;
    Long fila,colum;
    para(i,n){
        para(j,m){
            cin>>matriz[i][j];
            if(matriz[i][j]=='.'){
               fila=i;
                colum=j;
            }
        }
    }
    vector <Long> a;
    return 0;
}

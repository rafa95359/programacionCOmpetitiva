#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a;
    cin>>a;
    Long suma=0;
    Long aux=a;
    Long aux2=aux;
    while(aux!=0){
        suma+=aux%10;
        aux/=10;
        if(suma%4==0 && aux==0){
            cout<<aux2;
            return 0;
        }
        if(aux==0){
            aux2++;
            aux=aux2;
            suma=0;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long n;
    cin>>n;
    Long max=0,posmax;
    Long min=100,posmin;
    para(i,0,n){
        Long aux;
        cin>>aux;
        if(aux>max){
            max=aux;
            posmax=i;
        }        
        if(aux<=min){
            min=aux;
            posmin=i;
        }
    }
    if(posmax>posmin){
        posmax--;
    }
    cout<<posmax+n-posmin-1;
    return 0;
}   
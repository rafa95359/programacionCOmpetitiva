#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
char letra[27];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long n;
    cin>>n;
    para(i,0,n){
        string aux;
        cin>>aux;
        letra[aux[0]-'a']++;
    }
    Long suma=0;
    para(i,0,27){
        Long aux=letra[i];
        if(aux%2==0){
            suma+=(aux/2)*(aux/2-1);
            
        }
        else{
            
            suma+=((aux/2)*(aux/2-1))/2;
            suma+=((aux/2+1)*(aux/2))/2;

        }
    }
    cout<<suma<<endl;
    
    return 0;
}
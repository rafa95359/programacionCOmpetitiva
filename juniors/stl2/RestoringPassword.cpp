#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
int main(){    
    string contra;
    cin>>contra;
    map <string,int> codigo;
    para(i,10){
        string aux;
        cin>>aux;       
        codigo[aux]=i;
        
    }
    
    int iniciar=0;
    para(i,8){
        string aux=contra.substr(iniciar,10);        
        cout<<codigo[aux];
        iniciar+=10;
    }
    return 0;
}

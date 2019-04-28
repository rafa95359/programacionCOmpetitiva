#include <bits/stdc++.h>
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
using namespace std;


bool validarString(string c){
    string dia={c[0],c[1]};
    string mes={c[3],c[4]};
    string anio={c[6],c[7],c[8],c[9]};    
    if(c[2]!='-' || c[5] !='-') return false;
    if(c[0]<'0' || c[0]>'3' || c[1]<'0' || c[1]>'9')return false;
    if(c[3]<'0' || c[3]>'1' || c[4]<'0' || c[4]>'9')return false;

    
}
int main(){
    string profecia;
    cin>>profecia;
    para(i,profecia.size()){
        string aux=profecia.substr(i,10);
        
    }
    return 0;
}

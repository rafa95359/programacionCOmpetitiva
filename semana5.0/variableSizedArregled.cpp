#include <bits/stdc++.h>
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
using namespace std;
//complejidad memoria sum(k)
//complejidad tiempo n*sum(k) 
int main(){
    int n,q;
    cin>>n>>q;

    vector<int> datos[n];

    for ( int i = 0; i<n ; ++i){
        int tamanio;
        cin>>tamanio;
        for ( int j=0; j<tamanio ; ++j){
            int valor;
            cin>>valor;
            datos[i].push_back(valor);
        }
    }

    int consultas[q][2];

    for ( int i = 0; i<q ; ++i){              
        cin >> consultas[i][0] >> consultas[i][1];
    }

    for ( int i = 0; i<q ; ++i){              
        cout << datos[consultas[i][0]].at(consultas[i][1])<<endl;
    }    
    
    return 0;
}
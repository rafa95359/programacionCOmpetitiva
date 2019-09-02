#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
set<vector<Long>> ra;
Long respuesta[100];
Long numeros[12];
Long n;
Long x;
void Subconjuntos(Long lv,Long suma){
	if(lv == n || suma>=x){
        vector <Long>aux;
        if(suma==x){        
		for(Long i = 0; i < n; i++){
            if(respuesta[i]==1){
                aux.push_back(numeros[i]);
            }
		}
		ra.insert(aux);
        } 
		return;
	}
	for(Long i = 1; i >= 0; i--){
		respuesta[lv] = i;
        Subconjuntos(lv+1,suma+i*numeros[lv]);
		
	}
	return;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	
    while(cin>>x>>n,n){
        ra.clear();
        para(i,0,n){
            cin>>numeros[i];
        }
	    Subconjuntos(0,0);
        cout<<"Sums of "<<x<<":"<<endl;
        if(ra.empty()){
            cout<<"NONE"<<endl;
              continue;
        }
        bool encon=true;
        for(auto o=--ra.end();encon;o--){
            vector<Long> aux=*o;
            para(i,0,aux.size()-1){
                cout<<aux[i]<<"+";
            }
            cout<<aux[aux.size()-1]<<endl;
            if(o==ra.begin())encon=false;
        }

    }
	
	return 0;
}




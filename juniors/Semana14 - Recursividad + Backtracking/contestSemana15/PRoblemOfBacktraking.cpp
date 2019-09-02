#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
using namespace std;

typedef long long Long;
Long A[10];
Long respuesta[100];
bool used[100];
Long n=10;
Long k;
bool encontrado=false;
void permutaciones(Long lv){
	if(lv == n){
        Long suma=0;
		for(Long i = 0; i < n; i++){
			suma+=respuesta[i]*A[i];
		}               
		if(suma<=k && !encontrado){
            encontrado=true;
            for(Long i = 0; i < n; i++){
			    cout<<respuesta[i]<<" ";
            }
            cout<<endl;
		}    
		return;
    }
    
	
	for(Long i = 0; i < n; i++){
		if(!used[i]){
			used[i] = true;
			respuesta[lv] = i;
			permutaciones(lv+1);
			used[i] = false;
		}
        if(encontrado)break;
	}
	return;
}
void iniciar(){
    encontrado=false;
    para(i,0,n){
        used[i]=false;
        respuesta[i]=0;
    }

}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	Long t;
    cin>>t;
    para(i,0,t){        
        iniciar();
        para(i,0,10){
            cin>>A[i];
        }     
	    cin >> k;
        permutaciones(0);
        if(!encontrado)cout<<-1<<endl;
    }
	
	
	return 0;
}


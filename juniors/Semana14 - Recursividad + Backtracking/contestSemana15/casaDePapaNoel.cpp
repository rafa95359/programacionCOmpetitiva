#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
bool marcado[30];
bool valido[30];
vector <Long> resp;
void esValido(){
    valido[2]=valido[3]=valido[5]=valido[10]=valido[6]=valido[15]=valido[12]=valido[20]=true;
}
void papaNoel(Long inicio,Long nivel,Long previo,Long pre){
    if(nivel==8){
        //cout<<resp.size()<<endl;
        para(i,0,resp.size()){
            cout<<resp[i];
        }
        cout<<inicio<<endl;

        return;
    }
    resp.push_back(inicio);
    para(i,1,6){
        bool usado=false;
        if(valido[inicio*i] && !marcado[inicio*i]){
            usado=true;
            /*para(i,0,30){
                cout<<i<<" "<<marcado[i]<<" ";
            }
            cout<<endl;
            cout<<"valido "<<inicio<<" - "<<i<<" prev "<<previo<<" " <<pre<<" nivel "<<nivel<<endl;*/
            marcado[inicio*i]=true;
            //cout<<marcado[inicio*i]<<endl;
            papaNoel(i,nivel+1,inicio,i);
        }
        
        //cout<<"Temino "<<inicio<<" " <<i<<" "<<nivel<<endl;
        if(usado) marcado[inicio*i]=false;        
    }
    if(nivel>0)resp.pop_back();
    
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    esValido();
    papaNoel(1,0,0,0);
    return 0;
}
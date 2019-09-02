#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;

Long fila[10005],colum[10005];
string matriz[1005];
int main(){
    int n , m;
    cin>>n>>m;
    para(i,0,n){
        cin>>matriz[i];
    }
    Long total=0;
    //cout<<(matriz[0][0])<<endl;
    para(i,0,n){
        para(j,0,m){
            if(matriz[i][j]=='*'){
               // cout<<i<<" "<<j<<endl;
                fila[i]++;
                colum[j]++;
                total++;
            }
        }
    }
    //cout<<"total"<<endl;
    //cout<< total<<endl;
    para(i,0,n){
        para(j,0,m){
            //cout<<i<<" "<<j<<" "<<fila[i]<<" "<<colum[j]<<endl;
            if((matriz[i][j]=='.' && fila[i]+colum[j]==total)|| (matriz[i][j]=='*' && fila[i]+colum[j]==1+total)){
                cout<<"YES"<<endl;
                cout<<i+1<<" "<<j+1<<endl;
                return 0;
            }
        }
    }

    if(total==0){
        cout<<"YES"<<endl;
        cout<<1<<" "<<1<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
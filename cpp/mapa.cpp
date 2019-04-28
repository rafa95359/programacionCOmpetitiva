#include <bits/stdc++.h>
using namespace std;


void leerDatos(int m,int a[][],int n){
    for(int i=1; i < n+1; i++){
        for ( int j=1; j < m+1 ;j ++) {
            cin>>a[i][j];          
        }        
    }

}
void escribirDatos(int a[][],int n,int m){
    for(int i=0; i < n+1; i++){
        for ( int j=0; j < m+1;j ++) {
            cout<<a[i][j]<<" ";       
        }        
        cout<<endl;
    }

}

//void encontrarBorde(int a[][],int i,int j){
//
//
//}

int main(){
    int n,m;
    cin>>n>>m;
    int a[n+2][m+2] = {0};
    
    leerDatos(m,a,n);
    escribirDatos(a,n,m);
    






    return 0;
}
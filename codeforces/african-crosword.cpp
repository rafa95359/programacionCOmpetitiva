#include <bits/stdc++.h>
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
using namespace std;
int arr[105][105];
int main(){
    int n,m;
    cin>>n>>m;
    string palabras[n];
    para(i,n){
        cin>>palabras[i];
        string aux = palabras[i];
        
        para(j,m-1){
            int found = aux.find(aux[j],j+1);
            if( found != -1){
                arr[i][j]=1;
                arr[i][found]=1;
            }
        }
    }
    para(k,m){
        string aux;
        para(i,n){
            aux.push_back(palabras[i][k]);
        }
        para(j,n-1){
            int found = aux.find(aux[j],j+1);
            if( found != -1){
                arr[j][k]=1;
                arr[found][k]=1;
            }
        }
   }


    para(i,n){
        para(j,m){
            if(arr[i][j] == 0){
         
            cout<<palabras[i][j];
            } 
        }
    }

    return 0;
}

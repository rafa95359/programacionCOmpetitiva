#include <bits/stdc++.h>
using namespace std;



#define M 10000

int main () {

    int fila,colum;
    cin>>fila>>colum;   
    

    int arr[fila][colum];
    int arr2[fila][2];
    int arr3[colum][2];

    for (int i=0;i<fila;i++){
        arr2[i][0]=M;
        arr2[i][1]=-1;
    }    
   
    for (int i=0;i<colum;i++){
        arr3[i][0]=M;
        arr3[i][1]=-1;
    }

    
    for(int i=0; i<fila;i++){               
        for (int k=0;k<colum;k++){
            cin>>arr[i][k];     
            if( arr[i][k] == 1 ){               
                if( arr2[i][0] > k) arr2[i][0] = k;               
                if( arr2[i][1] < k) arr2[i][1] = k;               
                if( arr3[k][0] > i) arr3[k][0] = i;      
                if( arr3[k][1] < i) arr3[k][1] = i; 
            }      
        }
    }

    
    
    int resp =0;

    for(int i = 0 ;i<fila;i++){
        for(int k=0;k<colum;k++){
            if( arr[i][k] == 0 ){ 
                                      
                if ( k > arr2[i][0] && arr2[i][0] != M ) {
                    
                    resp++;}//derecha
                    
                if ( k < arr2[i][1] && arr2[i][1] != -1) {
                   
                    resp++;}//izquierda
                   
                   
                if ( i > arr3[k][0] && arr3[k][0] != M ) {
                  
                    resp++;}//abajo   
                    
                if ( i < arr3[k][1] && arr3[k][1] != -1) {
                   
                    resp++;}//arriba           
            } 
            
        }

    }


    
   
    cout<<resp<<endl;
    
    


    return 0;
}
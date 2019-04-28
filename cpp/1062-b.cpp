#include <bits/stdc++.h>
using namespace std;



bool tienenRaizDirecta(vector <int> a){    
    for(int i=0;i<a.size()-1;i++){        
        if(a[i] != a[i+1])return false;
        if( a[i]%2!=0) return false;
        
    }
    return true;
}   

int main(){

    int n;
    cin>>n;

    int minNr=1;
    //n= p x p x r x q
    //se para cuando todos sus divisores son unicos
    //devolver los unicos


    //convertir a  string   

    vector <int> arr;
    for(int i= 2; n > 1;i++){
        int can=0; 
        while(n % i == 0){
            can++;
            n= n/i;
        }
        if(can != 0){
            minNr= minNr*i;
            arr.push_back(can);        
        }
    }
    
    //for(int i=0;i<arr.size();i++) cout<<arr[i]<<endl;

    int nrOp=0;    
    

    int mayor=0;

    for(int i=0;i<arr.size();i++){
        if(arr[i]>mayor) mayor==arr[i];
    }
    int resp=0;
    if(tienenRaizDirecta(arr)){        
        for(int i=0;mayor>1;i++){
            resp++;
            mayor=mayor/2;
        }        

    }else{
        int cant=1;
        for(int i=2;)
    }
    
    
    

    cout<<minNr<<" "<<resp<<endl;
    



    return 0;
}

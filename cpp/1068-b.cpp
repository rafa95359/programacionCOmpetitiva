#include <bits/stdc++.h>

using namespace std;
bool isPrimo(long long n){

    for(long long i=2;(pow(i,2)) <=n; i++){                 
        if(n%i == 0){
            return false;           
        }
    }
    if(n ==1 ) return false; 
    return true; 

}
int main(){
    
    long long n;    
    cin>>n;    
    bool esPrimo=isPrimo(n);     
    bool validar=false;

    if(esPrimo) cout<<2<<endl;
    
    else{
        vector<int> a;
        int i=2,resp=1;
        while(n>1){
            int cant=0;       
            while( n % i == 0){
                cant++;
                n=n/i;
                validar=true;
            }
            i++;                  
            
            if(cant){            
                a.push_back(cant);
            }
            if(validar){            	
            	if(isPrimo(n)){
                	a.push_back(1);
                	n=1;
            	}
            	validar=false;
			}
            
        }
        for(int k=0;k<a.size();k++){
            resp= resp*(a[k]+1);
        }
        cout<<resp<<endl;
    }      
    return 0;


}
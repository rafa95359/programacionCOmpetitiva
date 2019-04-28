#include <bits/stdc++.h>
typedef long long Long;
using namespace std;

Long factorial(Long n){
    Long resp=1;
    while(n>1){
        resp *= n;
        n--;
    }
    
    return resp;
}

Long funcionAyuda(string c){
    Long arr[26]={0};

    //saber cuantos caracteres tenemos en total
    for(Long i=0;i<c.size();i++){        
        arr[c[i]-'a']++;
    }
    Long par=0,impar=0;
    vector<int> repetidos;

    for(Long i=0; i<26;i++){
        Long aux=arr[i];
         if(aux !=0){
            if(aux == 1) impar++;
            else if (aux %2 == 0){
                par+= aux/2;
                repetidos.push_back(aux/2);
            }else{
                impar++;
                par+=(aux-1)/2;
                repetidos.push_back((aux-1)/2);
            }
        }        
    }
    Long cant=1;
   for(Long i=0;i<repetidos.size();i++){
       cant*= repetidos[i];
   }
if(impar==0)return factorial(par)/cant;
else return factorial(par)/cant*impar;




}



int main(){
    string palabra;
    cin>>palabra;
    Long n;
    cin>>n;
    for( Long i=0 ;i<n;i++){      
        Long s,t;
        cin>>s>>t;
        string aux= palabra.substr(s-1,t-s+1);
        
        Long x= pow(10,9)+7;           
        cout<<funcionAyuda(aux)%x<<endl;

    }
    return 0;
}

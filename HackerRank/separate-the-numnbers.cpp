#include <bits/stdc++.h>
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
using namespace std;


string numeroSiguiente (string n){
    int tamanio = n.size(),cant=0;
    for (int i= tamanio-1 ;i>=0;i--){
        if( n[i]=='9') cant++;
        else break;
    }
    if(cant!= tamanio){
        for (int i= tamanio-1 ;i>=tamanio-cant;i--){
            n[i]='0';
        }
        n[tamanio-cant-1]=char(n[tamanio-cant-1]+1);
    }
    else{     
        para(i,tamanio){
            n[i]='0';
        }
        n.insert(n.begin(),'1');
    }
    return n;
}

string separando(string c){ 
    
    for(Long i=1;i<=c.size()/2;i++){
        bool encon=true;
        string min = c.substr(0,i);

        Long numDigitosAct= min.size();

        Long numDigitosSig=numeroSiguiente(min).size();

        Long numeroPrevio=numDigitosAct; 
        if(min[0] != '0'){
            for(Long k=0; k<(Long)c.size()-numDigitosAct;k += numeroPrevio){  
                string numeroActual = c.substr(k,numDigitosAct);
                string numSiguiente =c.substr( k + numDigitosAct , numDigitosSig ); 
                string verdaderoNumeroSiguiente = numeroSiguiente(numeroActual);
                if  ( verdaderoNumeroSiguiente.compare(numSiguiente) != 0 ){
                    encon=false;
                    break;
                }else{
                    numeroPrevio=numDigitosAct;
                    numDigitosAct=numDigitosSig;                            
                    numDigitosSig=numeroSiguiente(numSiguiente).size();                
                }
            }

                if(encon){
                string resp;resp.append("YES ");resp.append(min);
                return resp;
            }
        }      

    }    
    return "NO";
}


int main(){

    Long n;
    cin>>n;
    para(i,n){
        string palabra;
        cin>>palabra;
        cout<<separando(palabra)<<endl;
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

typedef long long Long;

bool isFullNine(string s){
    for(Long i=0;i<s.size();i++){
        if(s[i]!='9') return false;
    }
    return true;
}
Long stringToInt(string s){
	Long respuesta =0;
	if(s[0]=='0') return 0;
	for(Long i=0;i<s.size();i++){
		respuesta = respuesta*10+(s[i]-'0');
	}
	return respuesta;
}

void separateNumbers(string s){
	bool respuesta = false;
	Long firstNumber =0;
	for(Long tamDig=1;tamDig < s.size();tamDig++){
		Long tamDigAux = tamDig;
		firstNumber =0;
		for(Long i=tamDigAux;i<s.size();i=i+tamDigAux){
			if(i == tamDigAux){
				firstNumber = stringToInt(s.substr(i-tamDigAux,tamDigAux));
			}
			Long num2=stringToInt(s.substr(i-tamDigAux,tamDigAux));
			if(isFullNine(s.substr(i-tamDigAux,tamDigAux))){
				tamDigAux++;
			}
			Long num1=stringToInt(s.substr(i,tamDigAux));
	
			if(num1 - num2 != 1){
				break;
			}else{
				if(i+tamDigAux == s.size()){
					respuesta = true;
				}
			}
		}
		if(respuesta) break;
	}
	if(respuesta){
		cout<<"YES "<< firstNumber<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}
int main(){
	Long n;
	cin>>n;
	for(Long i=0;i<n;i++){
		string aux;
		cin>>aux;
		separateNumbers(aux);
	}
	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
int main(){
    string palabra;
    cin>>palabra;
    int letras=1;
    
    for(int i=1;i<palabra.size();i++){
        int j=i-1;
        bool encontrado=false;
        while(!encontrado && j>=0){
            if( palabra[i]==palabra[j])encontrado=true;
            j--;
        }
        if(!encontrado)letras++;
    }
    
    if(letras % 2 == 0) cout<<"CHAT WITH HER!"<<endl;
    else{cout<<"IGNORE HIM!"<<endl;}

    return 0;
}

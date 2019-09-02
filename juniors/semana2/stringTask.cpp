#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
int main(){
    string palabra;
    cin>>palabra;
    string vocales="aeiouy";
    for(ll i=0;i<palabra.size();i++){
         if(palabra[i]>='A' && palabra[i]<='Z'){
             palabra[i] += 'a'-'A';
         }
    }
    for(ll i=0;i<palabra.size();i++){
        if(vocales.find(palabra[i])!=-1){
            palabra.erase(palabra.begin()+i);
            i--;
        }
        else{

            palabra.insert(i,".");
            i++;
        }
    }
    cout<<palabra<<endl;
    return 0;
}
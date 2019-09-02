#include <bits/stdc++.h>
typedef long long Long;
#define para(i,n) for(int i=0;i<(Long)n;i++)
typedef long double Double;
using namespace std;
int main(){
    string palabra;
    cin>>palabra;
    string vocale="aeioun";
    string valido="aeiou";
    int tam=palabra.size();
    bool es=true;
    if(vocale.find(palabra[tam-1]) == -1){
        es=false;
    }
    else{
        para(i,tam-1){
            if(vocale.find(palabra[i])==-1){
                if(valido.find(palabra[i+1])==-1){
                    es=false;
                    break;
                }
            }
        }
    }
    if(es)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
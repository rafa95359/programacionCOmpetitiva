#include <bits/stdc++.h>
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
using namespace std;




string raiz(string c){
    int abc[26]={0};
    string resp;
    para(i,c.size()){
        abc[c[i]-'a']++;        
    }
    
    para(i,26){
        if(abc[i]>0) resp.push_back((char)(i+'a'));        
    }
    return resp;
}







int main(){
    Long n;
    cin>>n;
    string arr[n];
    para(i,n){
        cin>>arr[i];
    }

    vector<string> raices;

    para(i,n){
        string aux= raiz(arr[i]);
     
        bool no_encont=true;
        para(k,raices.size()){
            if(raices[k].compare(aux) == 0)no_encont =false;
        }
        if(no_encont)raices.push_back(aux);
    }
    cout<<raices.size()<<endl;










    return 0;
}

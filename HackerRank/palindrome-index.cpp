#include <bits/stdc++.h>
typedef long long Long;

using namespace std;

pair <bool,int> palindromo(string c){
    pair <bool,int>resp;
    for(Long i=0;i<c.size()/2 ;i++){
        if(c[i] != c[c.size()-i-1]) {
            resp.first=false;
            resp.second=i;
            return resp;
        }
    }
    resp.first=true;
    resp.second=-1;
    return resp;
}

int main(){
    Long n;
    cin>>n;
    
    for (Long i=0; i<n; i++){
        string palabra;
        cin>>palabra;
        int index=-1;
        int num=palindromo(palabra).second;        
        if(palindromo(palabra).first)cout<<index<<endl;
        else{
            string aux;
            aux.append(palabra);
            aux.erase(num,1);
            
            if(palindromo(aux).first)index=num;
            else{
                aux.clear();
                aux.append(palabra);
                aux.erase(palabra.size()-num-1,1);
                if(palindromo(aux).first)index=palabra.size()-num-1;
            }
            cout<<index<<endl;    
        }             
        

    }


    return 0;
}

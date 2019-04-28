#include <bits/stdc++.h>
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
using namespace std;

string ordenado(string x){

    sort(x.begin()+1,x.end());  
    for(int i=1;i<x.size();i++){
        if(x[i]>x[0]){                        
            swap(x[i],x[0]);            
            return x;
        }
    }
    return "no";

}

string biggerIsGreater(string c){
    
    
    for (int i= (int)c.size()-2; i>=0;i--){
        string resp=ordenado(c.substr(i,c.size()-i));

        if(resp.compare("no")!=0){           
            c.replace(i,resp.size(),resp);
            return c;            
        }
    }
    return "no answer";

}

int main(){
    int n;
    cin>>n;    
    para(i,n){
        string aux;
        cin>>aux;        
        cout<<biggerIsGreater(aux)<<endl;      
    }
    return 0;
}

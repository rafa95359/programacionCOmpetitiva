#include <bits/stdc++.h>
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
using namespace std;
int main(){
    string palabra;
    getline(cin,palabra);   
    vector <string> resp;  

    para(i,palabra.size()){
        string aux;        
        if(palabra[i]== '"'){            
            string aux;
            i++;
            while(palabra[i] != '"'){           
                aux.push_back(palabra[i]);
                i++;
            }           
            resp.push_back(aux);                  
            continue;
        }
        if(palabra[i]!=' '){            
            while(palabra[i]!=' ' && i != palabra.size()){                
                aux.push_back(palabra[i]);
                i++;
            }
            resp.push_back(aux);            
        }


    }
    para(i,resp.size()){
        cout<<"<"<<resp[i]<<">"<<endl;
    }


    return 0;
}

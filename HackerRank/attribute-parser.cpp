#include <bits/stdc++.h>
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
using namespace std;


string encontrarTag(string linea){
    string resp;
    for (int j=1; linea[j]!= '>' && linea[j]!=' ';j++){
        resp.push_back(linea[j]);
    }

    return resp;
}
string encontrarvalorAtributo(string linea,string atributo_name){
    int found= linea.find(' '+atributo_name+' ');
    found++ ;    
    if(linea[found-1] !=' ')return "Not Found!";    
    if (found ==-1) return "Not Found!";
    else{
        
        string resp;
        for (int j= found+atributo_name.size()+4; linea[j]!= '"';j++){
            resp.push_back( linea[j]);
        }
        return resp;
    }
}
vector <string> hallarTagConsulta(string consul){
    int j=0;
    vector <string> finale;
    while(consul[j]!= '~'){
        string resp;
        while( consul[j]!= '~' && consul[j]!='.'){
            resp.push_back(consul[j]);
            j++;
        }
        finale.push_back(resp);
        if(consul[j]=='.') j++;
    }
    return finale;
}


bool consultaValida(string tags[],int n,vector <string> consulta){
    int abierto=0, j=0, abierto2=0;
    para(i,n){
        string tag = tags[i];
        if( tag[1] != '/') abierto++;
        else abierto--;
        if( encontrarTag(tag).compare(consulta[j]) == 0){           
            abierto2++;
            if(abierto != abierto2 )return false;
            j++;
        }   
        if(j==consulta.size())return true;
          
    }
    
    if(j!= consulta.size()) return false;
    return true ;

}
string atributoDeConsulta(string consulta){
    int find = consulta.find('~');
    string resp;
    resp.append(consulta.substr(find+1,consulta.size()-find-1));
    return resp;
}

int main(){
    int n,q;
    cin>>n>>q;
    string tags[n],consul[q];
    cin.ignore();
    para(i,n){
        getline(cin,tags[i]);
    }
    para(i,q){
        getline(cin,consul[i]);
    }
    para(i,q){
        string consulta= consul[i];
        vector <string > consultaV = hallarTagConsulta(consulta);        

        if( consultaValida(tags,n,consultaV) ){            
            para(j,n){
                string tag = encontrarTag(tags[j]);                
                if( tag.compare( consultaV[consultaV.size()-1]) == 0){                       
                    string atributo = encontrarvalorAtributo(tags[j],atributoDeConsulta(consulta));
                    cout<<atributo<<endl;
                    break;
                }
            }
        }
        else{
            cout<<"Not Found!"<<endl;
        }

    }
    return 0;
}

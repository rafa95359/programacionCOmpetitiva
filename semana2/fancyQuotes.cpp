#include <string>
#include <iostream>



using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    for (int i=0;i<n;i++){
        string palabra;

        bool encontrado=false;
        getline(cin,palabra);   

        
        
        if(palabra.size()>3){
            if(palabra.find(" not ") != -1 || (palabra.substr(0,4)=="not ") || (palabra.substr(palabra.size()-4,4)==" not")) encontrado=true;     
        }else if(palabra=="not") encontrado=true;              
        if(encontrado)cout<<"Real Fancy"<<endl;        
        else cout<<"regularly fancy"<<endl;
        
    }
        
    return 0;
}
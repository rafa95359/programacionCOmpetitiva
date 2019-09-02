#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    string home;
    cin>>home;
    map<string,int> llegada,salida;

    para(i,0,n){
        string aux;
        cin>>aux;
        int pos=aux.find('-');
        llegada[aux.substr(0,pos)]++;
        salida[aux.substr(pos+2,aux.size()-pos-2)]++;

    }
   /*for(auto x:llegada){
        cout<<x.first<<" "<<x.second<<endl;
    }
    cout<<"ads"<<endl;
    for(auto x:salida){
        cout<<x.first<<" "<<x.second<<endl;
    }
    cout<<" sdadsa"<<endl;*/
    if(llegada[home]!=salida[home])cout<<"contest"<<endl;
    else cout<<"home"<<endl;

    return 0;
}
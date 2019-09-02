#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
map <Long,vector<Long>> x;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long n;
    cin>>n;
    
    para(i,0,n){
        Long aux;
        cin>>aux;
        x[aux].push_back(i);
    }
    bool acabo=false;
    Long can=0;
    //4,8,15,16,23,42
    Long a=0,b=0,c=0,d=0,e=0,f=0;
    while(!acabo){
        Long aux=0;
        if(a==x[4].size() ){
            acabo = true;
            break;
        }
        aux++;
        for(b;b<x[8].size();b++){
            if(x[8][b]>x[4][a]){
                aux++;
                break;
            }

        }
        for(c;c<x[15].size();c++){
            if(x[15][c]>x[8][b]){
                aux++;
                break;}
        }
        for(d;d<x[16].size();d++){
            if(x[16][d]>x[15][c]){
                aux++;
                break;}
        }
        for(e;e<x[23].size();e++){
            if(x[23][e]>x[16][d]){
                aux++;
                break;}
        }
        for(f;f<x[42].size();f++){
            if(x[42][f]>x[23][e]){
                aux++;
                break;}
        }
        if(aux==6){
            can++;
            a++;
            b++;
            c++;
            d++;
            e++;
            f++;            
        }
        else{
            acabo=true;
            break;
        }        
    }
    cout<<n-can*6<<endl;
    return 0;
}
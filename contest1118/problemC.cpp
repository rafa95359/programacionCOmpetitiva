#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;


void crearMatriz(map<Long,Long> x,Long n){
    Long res[n][n];
    string cuatro,dos;
    
    Long can=0;
    for(auto m:x){
        Long a=m.second/4;
        for(int i=0;i<a;i++){
            cuatro.push_back(m.first);
        }
        can+=a*4;
        m.second-=a*4;
        if(n%2!=0){
            if(can==(n-1)*(n-1)/4)break;
        }        
    }
    for(auto m:x){
        Long a=m.second/2;
        for(int i=0;i<a;i++){
            dos.push_back(m.first);
        }
        m.second-=a*2;
    }
    Long uno;
    for(auto m:x){
        if(m.second==1){
            uno=m.first;
            break;
        }
    }
    for(int i=0;i<cuatro.size();i++){
        cautro
    }

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long n;
    cin>>n;
    map<Long,Long> x;
    para(i,0,n*n){
        Long aux;
        cin>>aux;
        x[aux]++;
    }   
    Long cuatro=0,dos=0;    
    for(auto m:x){
        Long a=m.second/4;
        cuatro+=a;      
    }
     for(auto m:x){
        Long a=m.second/2;
        dos+=a;      
    }
    if(n%2==0){
        if(cuatro==n*n/4){
            cout<<"YES"<<endl;

        }else{
            cout<<"NO"<<endl;
        }
    }
    else{
        dos-=(n-1)*(n-1)/2;
        if(cuatro>=(n-1)*(n-1)/4 && dos==n-1){
            cout<<"YES"<<endl;
            
        }else cout<<"NO"<<endl;
    }
    
    return 0;
}
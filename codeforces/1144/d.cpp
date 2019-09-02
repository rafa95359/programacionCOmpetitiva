#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long n;
    cin>>n;
    vector <Long> arr;
    map<Long,queue<Long>> pos;
    Long maxigual=0;
    Long value=0;
    para(i,0,n){
        Long aux;
        cin>>aux;
        arr.push_back(aux);
        pos[aux].push(i);
        if(pos[aux].size()>maxigual){
            maxigual=pos[aux].size();
            value=aux;
        }
    }
    
    Long m=n-maxigual;
    cout<<m<<endl;
    for(Long i=pos[value].front();i>0;i--){
        if(arr[i-1]<value){
            cout<<1<<" "<<i<<" "<<i+1<<endl;
        }
        else{
            cout<<2<<" "<<i<<" "<<i+1<<endl;
        }
    }
    while(!pos[value].empty()){
        Long posicion=pos[value].front();
        pos[value].pop();
        Long final;
        if(pos[value].empty()){
            final=n;
        }else{
            final=pos[value].front();
        }

        
        for(Long i=posicion;i<final-1;i++){            
            if(value>arr[i+1]){
                cout<<1<<" "<<i+2<<" "<<i+1<<endl;
            }
            else{
                cout<<2<<" "<<i+2<<" "<<i+1<<endl;
            }
        }

    }
    
    return 0;
}
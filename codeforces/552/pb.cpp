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
    set <Long> x;
    vector <Long >y;
    para(i,0,n){
        Long aux;
        cin>>aux;
        x.insert(aux);
        

    } 
    auto it=x.begin();
    para(i,0,x.size()){
        y.push_back(*it);
        it++;
    }
    if(x.size()>3){
        cout<<-1<<endl;
    }
    else if(x.size()<3){
        if(x.size()==1){
            cout<<0<<endl;
        }else{

        if((y[1]-y[0])%2==0){
            cout<<(y[1]-y[0])/2<<endl;
        }else{
            cout<<y[1]-y[0]<<endl;
        }
        }
    }
    else{
        Long value;
        if(y[1]-y[0]==y[2]-y[1])cout<<y[1]-y[0]<<endl;
        else{ cout<<-1<<endl;}

    }

    return 0;
}
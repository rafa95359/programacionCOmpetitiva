#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long n;
    cin>>n;
    vector <string> x;
    para(i,0,n){
        Long aux;
        cin>>aux;
        string a;
        while(aux/9!=0){
            a.push_back('9');
        }
        
        a.push_back((aux%9)+'0');
        x.push_back(a);
        if(i>0 ){
            while(x[i].size()<=x[i-1].size()){
                x[i].push_back('0');
            }
        }
    }
    para(i,0,n){
        cout<<x[i]<<endl;
    }
    return 0;
}
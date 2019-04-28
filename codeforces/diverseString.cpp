#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
bool esDiversa(string a){
    Long n=a.size();
    Long abc[28]={0};
    for( Long i=0;i<n;i++){
        abc[a[i]-'a']++;
        if(abc[a[i]-'a']>n/2)return false;
    }
    return true;

}
int main(){
    Long n;
    cin>>n;
    string pal;
    cin>>pal;
    bool resp=false;
    string aux;
    for(Long i=2;i<=n && !resp;i++){
        for(Long j=0;j<n-i+1 && !resp;j++){
            resp=esDiversa(pal.substr(j,i));         
            if(resp){
                aux=pal.substr(j,i);
            }
        }
    }
    if(resp){
        cout<<"YES"<<endl;
        cout<<aux;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}

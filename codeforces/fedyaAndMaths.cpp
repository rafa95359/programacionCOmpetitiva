#include <bits/stdc++.h>
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
using namespace std;


int main(){
    string a;
    cin>>a;
    int x=0;
    
    if(a.size()>1) x=a.at(a.size()-2)-'0';    
    x=x*10+a.at(a.size()-1)-'0';
    int resp;
    if(x%4==0)cout<<4<<endl;
    else cout<<0<<endl;   



    return 0;
}

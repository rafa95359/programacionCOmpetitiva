#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    int cont=0;
    para(i,0,s.size()/2){
        if(s[i]!=s[s.size()-1-i])cont++;
    }
    if(cont==1 || (cont==0 && s.size()%2!=0) )cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
int main(){
    string a;
    cin>>a;
    Long errores=0;
    for(int i=0;i<a.size()/2;i++){
        if(a[i]!= a[a.size()-i-1])errores++;

    }
    if(errores==1 || (errores==0 && a.size()%2!=0))cout<<"YES"<<endl;
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}

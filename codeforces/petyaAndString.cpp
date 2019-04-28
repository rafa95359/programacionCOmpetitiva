#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string a,b;
    cin>>a>>b;
    para(i,0,a.size()){
        a[i]=tolower(a[i]);
        b[i]=tolower(b[i]);
    }
    Long resp=0;
    para(i,0,a.size()){
        if(a[i]<b[i]){
            resp=-1;
            break;
        }
        if(a[i]>b[i]){
            resp=1;
            break;
        }
    }
    cout<<resp<<endl;
    return 0;
}
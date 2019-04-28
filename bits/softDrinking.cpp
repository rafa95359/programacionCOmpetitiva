#include <bits/stdc++.h>
typedef long long Long;
#define para(i,n) for(int i=0;i<(Long)n;i++)
typedef long double Double;
using namespace std;
int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    cout<<min({k*l/(n*nl),c*d/n,p/(n*np)})<<endl;
     return 0;
}
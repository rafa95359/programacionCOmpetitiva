#include <bits/stdc++.h>
typedef long long Long;
#define para(i,n) for(int i=0;i<(Long)n;i++)
typedef long double Double;
using namespace std;
int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int minGas=n*nl;
    int minLimon=n;
    int minSal=n*np;
    int canGas=k*l;
    int canLim=c*d;


    int max=canGas/minGas;
    if(canLim/minLimon < max)max=canLim/minLimon;
    if(p/minSal< max)max=p/minSal;
    
    cout<<max<<endl;
    
    


    return 0;
}
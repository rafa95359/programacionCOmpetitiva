#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)

int main(){
    
    Long a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    //Long resp=a+b+c;
    //resp*=resp;
    //resp=resp-(a*a+c*c+e*e);
    Long resp=c*d+e*f+a*e+a*f+d*e+d*f;    
    cout<<resp;
    
}


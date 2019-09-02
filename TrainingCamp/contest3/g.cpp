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
    Long i=1,resp=0;
    while(n-1-i>=0){
        Long aux=(n-1-i)/(2*i)+1;
        resp+=aux*i;    
        i*=2;
    }   
    cout<<resp;
    return 0;
}
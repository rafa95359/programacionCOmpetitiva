#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
int funcione(int[] x){
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,can=0;
    funcione({2);
    cin>>n;
    for(int i=2;i<=n;i++){
        if(n%i==0)cout<<i<<" ";
        while(n%i==0){
            can++;
            n/=i;
        }
    }   
    cout<<endl<<can<<endl;
    return 0;
}
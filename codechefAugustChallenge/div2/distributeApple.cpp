#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long t;
    cin>>t;
    para(i,0,t){
        Long n,k;
        cin>>n>>k;
        Long valor=n/k;

        if(valor%k!=0){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }   
    return 0;
}
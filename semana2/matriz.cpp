#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
int main(){
    ll n;
    cin>>n;
    ll diagIz=0,diagDe=0;
    ll arr[n][n];
    for (ll i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int t;
            cin>>t;
            if(i==j)diagIz+=t;
            if(i+j==n-1)diagDe+=t;
        }
    }
    cout<<abs(diagDe-diagIz);  
       
    return 0;
}
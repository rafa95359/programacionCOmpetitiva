#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
int main(){
    ll n;
    cin>>n;
    
    for (ll i=0;i<n;i++){
        int c,d;
        cin>>c>>d;
        double x=c+5.0*(d)/9;
        cout<<"Case "<<i+1<<": "<< fixed <<setprecision(2)<< x<<endl;

    }
    
       
       
    return 0;
}
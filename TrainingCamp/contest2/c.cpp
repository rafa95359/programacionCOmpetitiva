#include<bits/stdc++.h>
using namespace std;


typedef long long ll;

ll a[200001],b[200001],c[200001];
ll xxx;


int main(){
    ll n;
    cin >> n;
    bool answer = true;
    for(ll i=0;i<n;i++){
        cin>> a[i];
    }   
    ll k =(n-1)/2;
    for(ll i=0;i<k+1;i++){
        ll valA = a[n-1- i] + a[i];
        ll valB = a[n-1-i] - a[i];
        if(valA % 2 != 0|| valB %2 !=0){
            answer = false;
            break;
        }
        c[i] = valA/2;
        c[n-1-i] = valA/2;
        b[i] = -1*valB/2;
        b[n-1-i] = valB/2;
    }
    if(answer){
        cout<<"YES"<<endl;
        for(ll a=0;a<n;a++){
            cout<<b[a]<<" ";
        }
        cout<<endl;
        for(ll a=0;a<n;a++){
            cout<<c[a]<<" ";
        }
        cout<<endl;

    }else{

        cout<<"NO"<<endl;
    }
}
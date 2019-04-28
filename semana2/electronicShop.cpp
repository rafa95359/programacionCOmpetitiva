#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
int main(){
    ll b,n,m;
    

    cin>>b>>n>>m;
    vector<ll> arr1;
    vector<ll> arr2;

    for (ll i=0;i<n;i++){
        ll t;
        cin>>t;
        arr1.push_back(t);        
    }    
    for (ll i=0;i<m;i++){      
        ll t;
        cin>>t;
        arr2.push_back(t);   
    }
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    ll resp =-1;

    for(ll i=n-1;i>=0;i--){
        for(ll j=m-1;j>=0;j--){
            if(arr1[i]+arr2[j]>b){
                continue;
            }else{
                if(arr1[i]+arr2[j] > resp){
                    resp = arr1[i]+arr2[j];
                    break;
                }
            }
        }
    }
    cout<<resp<<endl;
    return 0;
}
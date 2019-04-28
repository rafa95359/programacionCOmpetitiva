#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
int main(){
    vector <ll> num;
    for(ll i=0;i<5;i++){
        ll t;
        cin>>t;
        num.push_back(t);
    }
    sort(num.begin(),num.end());
    cout<<num[0]+num[1]+num[2]+num[3]<<" "<<num[4]+num[1]+num[2]+num[3]<<endl;
    return 0;
}

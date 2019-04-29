#include <bits/stdc++.h>

#define debug(x) cout<<#x<<" => "<<x<<endl;

#define debugArray(x,n) for(long long i=0;i<n;i++) cout<<#x[i]<<" => "<<x[i]<<endl;

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++){
        string n;
        char d;
        cin>>n>>d;
 
        deque<char> cola;
        for(ll j = 0 ; j<n.size();j++){
            if(cola.empty()){
                cola.push_back(n[j]);
            }else{
                if(n[j]<cola.back()){
                    while(!cola.empty()){
                        if(n[j]>=cola.back()){
                            break;
                        }
                        cola.pop_back();
                    }
                  
                }
                    cola.push_back(n[j]);
            }
        }
        while(!cola.empty()){
            if(cola.back()>d){
                cola.pop_back();
            }else{
                break;
            }
        }
        ll cont = cola.size();
        while(!cola.empty()){
                cout<<cola.front();
                cola.pop_front();
        }
        for(ll j=0;j<n.size()-cont;j++){
            cout<<d;
        }
        cout<<endl;
    }
    return 0;
}
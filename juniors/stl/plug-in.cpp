#include <bits/stdc++.h>
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
#define pb push_back
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string a;
    cin>>a;
    Long sz=a.size();
    vector <char> m;
    
    for(Long i=0;i<sz;i++){
        if(m.empty()){
            m.push_back(a[i]);
        }
        else{
            if(a[i]==m.back()){
                m.pop_back();
            }
            else{
                m.push_back(a[i]);
            }
        }
        
    }
    para(i,m.size()){
        cout<<m[i];
    }
    return 0;
}
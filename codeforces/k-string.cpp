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
    string a;
    cin>>a;
    map<char,Long> x;
    para(i,0,a.size()){
        x[a[i]]++;
    }
    string resp;
    for(auto m:x){
        if(m.second % n != 0){
            cout<<-1<<endl;
            return 0;
        }
        para(i,0,m.second/n){
            resp.push_back(m.first);

        }
    }
    para(i,0,n){
        cout<<resp;
    }

    return 0;
}
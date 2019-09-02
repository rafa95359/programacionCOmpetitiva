#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    set<Long> x;
    x.insert(2);
    x.insert(20);
    x.insert(23);
    x.insert(28);
   // reverse(x.begin(),x.end());
    for(auto m:x){
        cout<<m<<endl;
    }

    return 0;
}
#include <bits/stdc++.h>
#define debug(x) cout << #x <<  " = " << x << endl;
#define pb push_back
using namespace std;

typedef long long Long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<Long> v = {5 , 7 , -8 , 9 , 15};
    Long sz = v.size();
    for(Long i = 0; i < sz; i++ ) {
       cout << v[i] << " ";
    }
    cout << endl;
    for(vector<Long>::iterator it = v.begin() ; it != v.end(); it++ ) {
       cout << *it << " ";
    }
    cout << endl;
    for(auto it = v.begin() ; it != v.end(); it++ ) {
       cout << *it << " ";
    }
    cout << endl;
    for(Long x : v) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}
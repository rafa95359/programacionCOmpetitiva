#include <bits/stdc++.h>
#define debug(x) cout << #x <<  " = " << x << endl;
#define pb push_back
using namespace std;

typedef long long Long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Long n;
    cin >> n;

    stack<Long> v;

    for(Long i = 0; i < n; i++) {
        Long num;
        cin >> num;
        v.push(num);
    }

    while(!v.empty()) {
        Long x = v.top(); //acceder al ultimo element
        cout << x << " ";
        v.pop(); //eliminar el ultimo elemento
    }
    cout << endl;
    
    return 0;
}
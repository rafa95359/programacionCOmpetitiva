#include <bits/stdc++.h>
using namespace std;
typedef long long Long;

//Tiempo : O(n)
//Memoria : O(n)

const Long MAX = 2e5 + 20;
Long b[MAX];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    Long n;
    cin >> n;
    for(Long i = 0; i < n; i++) {
        cin >> b[i];
    }
    Long resp = 0;
    resp += abs(b[0]);
    for(Long i = 1; i < n ; i++) {
        resp += abs(b[i] - b[i - 1]);
    }
    cout << resp << endl;
    return 0;
}
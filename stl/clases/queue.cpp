#include <bits/stdc++.h>
#define debug(x) cout << #x <<  " = " << x << endl;
#define pb push_back
using namespace std;

typedef long long Long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    queue<Long> q;
    Long n;
    cin >> n;

    for(Long i = 0; i < n; i++) {
        Long num;
        cin >> num;
        q.push(num);
    }

    while(!q.empty()) { //mientras no este vacia
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    
    return 0;
}
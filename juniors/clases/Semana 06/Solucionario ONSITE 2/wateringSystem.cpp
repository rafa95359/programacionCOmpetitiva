#include <bits/stdc++.h>
using namespace std;
typedef long long Long;

//Tiempo : O(n log n)
//Memoria : O(n)
bool cmp(const Long &a, const Long &b) {
    return a > b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    Long n , A , B;
    cin >> n >> A >> B;

    Long s0;
    cin >> s0;
    vector<Long> v;
    Long sum = s0;
    for(Long i = 1; i < n; i++) {
        Long s;
        cin >> s;
        v.push_back(s);
        sum += s;
    }
    sort(v.begin(),v.end(), cmp);

    for(Long i = 0; i < n - 1; i++) {
        //(s0 * A) / sum >= B
        if(s0 * A >= sum * B) {
            cout << i << endl;
            return 0;
        }
        sum -= v[i];
    }
    cout << n - 1 << endl;
    return 0;
}
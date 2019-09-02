#include <bits/stdc++.h>
using namespace std;
typedef long long Long;

//Tiempo : O(n log n)
//Memoria : O(n)

const Long MAX = 1e5 + 5;
Long extra[MAX];

bool cmp(const Long &a, const Long &b) {
    return a > b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    Long n,f;
    cin >> n >> f;
    Long resp = 0;

    for(Long i = 0; i < n; i++) {
        Long k , l;
        cin >> k >> l;
        resp += min(k , l);
        extra[i] = min(2 * k , l) - min(k , l);
    }

    sort(extra, extra + n, cmp);

    for(Long i = 0; i < f; i++) {
        resp += extra[i];
    }

    cout << resp << endl;
    return 0;
}
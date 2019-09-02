#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << x << endl
#define REP(i,n) for(Long i = 0; i < (Long)n; i++)
#define pb push_back
using namespace std;

typedef long long Long;

const Long MAX = 2e5 + 5;
Long p[MAX];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    Long N;
    cin >> N;
    
    set<Long> s;
    
    for(Long i = 0 ; i < N; i++) {
        cin >> p[i];
    }
    
    s.insert(-p[N - 1]);
    Long minLoss = 1e18;
    for(Long i = N - 2; i >= 0; i--) {
        set<Long>::iterator it = s.upper_bound(-p[i]);
        if(it != s.end()) {
            
            minLoss = min(minLoss , p[i] + *it);
        }
        s.insert(-p[i]);
    }
    cout << minLoss << endl;
    
    return 0;
}


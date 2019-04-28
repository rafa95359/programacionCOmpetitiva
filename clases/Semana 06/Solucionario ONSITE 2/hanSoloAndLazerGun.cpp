#include <bits/stdc++.h>
using namespace std;
typedef long long Long;

//Tiempo : O(n ^ 2)
//Memoria : O(n)

const Long MAX = 1020;
pair<Long,Long> P[MAX];

bool used[MAX];

bool onTheSameLine(pair<Long,Long> p1, pair<Long,Long> p2, pair<Long,Long> p3) { //O(1)
    // pendiente1 = pendiente2
    // (p1.first - p2.first ) / (p1.second - p2.second) == (p3.first - p2.first) / (p3.second - p2.second)
    return (p1.first - p2.first ) * (p3.second - p2.second) == (p3.first - p2.first) * (p1.second - p2.second);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Long n;
    cin >> n;
    Long x0,y0;
    cin >> x0 >> y0;

    for(Long i = 0; i < n; i++) {
        cin >> P[i].first >> P[i].second;
    }

    Long cnt = 0;
    for(Long i = 0; i < n; i++) {
        if(!used[i]) {
            cnt++;
            for(Long j = i ; j < n; j++) {
                if(onTheSameLine({x0,y0} , P[i] , P[j])) {
                    used[j] = true;
                }
            }
        }
    }
    cout << cnt << endl;

    return 0;
}
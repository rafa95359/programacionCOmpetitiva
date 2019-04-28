#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)

int ans[1010];
map<int, int> m;


int gcd(int x, int y) {
    return y == 0 ? x : gcd(y, x % y);
}


int main() {


    //freopen("aa.in", "r", stdin);


    int n, x;
    m.clear();
    scanf("%d", &n);
    for(int i = 1; i <= n*n; ++i) {
        scanf("%d", &x);
        m[x]++;
    }
    int cnt = 0;
    for(map<int, int>::reverse_iterator it = m.rbegin(); it != m.rend(); ++it) {
        if(it->second == 0) continue;
        while(it->second > 0) {
            ans[cnt] = it->first;
            it->second--;
            for(int j = 0; j < cnt; ++j) {
                int d = gcd(ans[j], it->first);
                m[d] -= 2;
            }
            cnt++;
        }
    }
    printf("%d", ans[0]);
    for(int i = 1; i < cnt; ++i) {
        printf(" %d", ans[i]);
    }
    printf("\n");
    return 0;
}
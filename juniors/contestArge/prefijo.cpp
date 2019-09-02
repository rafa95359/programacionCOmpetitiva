#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
const int N = 1e5 + 5;
int n, nxt[N], pos[N], f[N];
char s[N];
int main() {
    scanf("%s", s + 1);
    n = strlen(s + 1);
    nxt[1] = 0;
    for (int i = 2, j = 0; i <= n; i++) {
        cout<<"i "<<i<<endl;
        while ( j && s[j + 1] != s[i]) {
            j = nxt[j];
            cout<<"j "<<j<<" ";}
        cout<<endl;
        if (s[j + 1] == s[i]) j++;
        cout<<"j2 "<<j<<endl;
        
        nxt[i] = j;
    
    }
    int tot = 0;
    for (int i = n; i; i = nxt[i]) {
        pos[++tot] = i;
    }
    std::fill(f + 1, f + n + 1, 1);
    for (int i = n; i >= 1; i--) {
        f[nxt[i]] += f[i];
    }
    printf("%d\n", tot);
    for (int i = tot; i >= 1; i--) {
        printf("%d %d\n", pos[i], f[pos[i]]);
    }
    return 0;
}
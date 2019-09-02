    #include <bits/stdc++.h>
    using namespace std;
    #define para(i,a,n) for(int i=a;i<n;i++)
    typedef long long Long ;
    const int N = 100005;

    int n, nxt[N], pos[N], f[N];
    char s[N];

    int main() {
        cin>>(s+1);
        n = strlen(s + 1);
        //cout<<s[1]<<endl;
        nxt[1] = 0;
        //tabla de fallos
        for (int i = 2, j = 0; i <= n; i++) {
            for (; j && s[j + 1] != s[i]; j = nxt[j]){
            };
            if (s[j + 1] == s[i]) j++;
            nxt[i] = j;
        }
    para(i,1,n+5){
            cout<<nxt[i];
        }
        cout<<endl;
        int tot = 0;
        for (int i = n; i; i = nxt[i]) {
            pos[++tot] = i;
        }
        fill(f + 1, f + n + 1, 1);
        for (int i = n; i >= 1; i--) {
            f[nxt[i]] += f[i];
        }
        cout<<tot<<endl;
        for (int i = tot; i >= 1; i--) {
            cout<< pos[i]<<" "<< f[pos[i]]<<"\n";
        }
        return 0;
    }
# include <bits/stdc++.h>
 
using namespace std;
 
const int maxn = 1e5 + 5;
const int mod = 1e9 + 7;
typedef long long ll;
int a[maxn];
ll dp[maxn*10];
int n;
 
int main(){
    std::ios::sync_with_stdio(false);
    cin>>n;
        dp[0] = 1;
        for(int i = 1; i <= n; ++i){
            cin >> a[i];
 
            vector <int> cur;
            for(int j = 1; j * j <= a[i]; ++j){
                if(a[i] % j == 0){
                    cur.push_back(j);
                    if(a[i] / j != j)
                        cur.push_back(a[i] / j);
                }
            }
            sort(cur.begin(), cur.end());
            reverse(cur.begin(), cur.end());
            for(int j = 0; j < cur.size(); ++j)
                dp[cur[j]] = dp[cur[j]] + dp[cur[j]-1] % mod;
        }
        ll res = 0;
        for(int i = 1; i <= n; ++i)
            res = (res + dp[i]) % mod;
        cout << res % mod << endl;
    
    return 0;
}
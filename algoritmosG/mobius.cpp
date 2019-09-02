#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
const int N=1e7+5;
int tot,p[N/10],f[N];
bool flg[N];

void init() {
    for(int i=2;i<N;++i) {
        if(!flg[i]) p[++tot]=i;
        for(int j=1;j<=tot&&i*p[j]<N;++j) {
            flg[i*p[j]]=1;
            if(i%p[j]==0) break;
        }
    }
}
void dfs(int st,int sum,int cnt) {
    f[sum]=cnt&1?1:-1;
    for(int i=st;i<=tot;++i) {
        long long now=1LL*sum*p[i];
        if(now>N) break;
        dfs(i+1,now,cnt+1);
    }
}
int main() {
    init();
    dfs(1,1,0);
    int T;
    for(int i=0;i<=10000;i++){
        cout<<f[i]<<" ";
    }
    for(scanf("%d",&T);T--;) {
        long long n;
        scanf("%lld",&n);
        long long ans=0;
        for(int i=2;1LL*i*i<=n;++i) if(f[i]) ans+=f[i]*n/(1LL*i*i);
        printf("%lld\n",n-ans);
    }
    return 0;
}
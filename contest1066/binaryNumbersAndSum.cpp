#include <bits/stdc++.h>
using namespace std;
typedef long long lli;
typedef pair<int,int> pii;

int n,m;
char s[200010],t[200010];
int pt[200010];

const lli mod=998244353;
lli power(lli a,lli p) {
	lli res=1;
	while(p) {
		if(p&1) res=res*a%mod;
		a=a*a%mod;
		p>>=1;
	}
	cout<<res<<endl;
	return res;
}

int main() {
	scanf("%d%d",&n,&m);
	scanf("%s%s",s,t);
	reverse(s,s+n); reverse(t,t+m);

	int cnt=0;
	for(int i=0;i<m;i++)if(t[i]=='1') 
		cnt++;

	lli ans=0;
	for(int i=0;i<min(n,m);i++) {
		if(s[i]=='1') ans = (ans + power(2,i)*cnt)%mod;
		if(t[i]=='1') cnt--;
	}
	printf("%lld\n",ans);

	return 0;
}
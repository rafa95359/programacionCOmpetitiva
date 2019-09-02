#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
const int maxn=100005;
char s[3][maxn];
int nt[3][maxn];
int flag[3],dis[3][3];
int main()
{
	int i,j,k,q,h;
    for (i=0;i<3;i++) 
	{
		cin>>s[i];
		dis[i][i]=strlen(s[i]);
	}
	for (i=0;i<3;i++)
	{
		nt[i][0]=-1;
		for (j=0;s[i][j];j++)
		{
			int k=nt[i][j];
			while (k>=0&&s[i][j]!=s[i][k]) k=nt[i][k];
			nt[i][j+1]=k+1;
		}
	}
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			if (i==j) continue;
			for (q=0,h=nt[i][1];s[j][q];)
			{
				if (h<0||s[j][q]==s[i][h])
				{
					q++,h++;
					if (!s[i][h]) flag[i]=1;
				}
				else h=nt[i][h];
				if (!s[j][q]) dis[j][i]=h;
			}
		}
	}
	int ans=10000000,sum=0,now=0,c=3;
	for (i=0;i<3;i++) c-=flag[i];
	for (i=0;i<3;i++)
	{
		if (flag[i]) continue;
		sum=dis[i][i];
		for (j=0;j<3;j++)
		{
			if (i==j||flag[j]) continue;
			sum+=dis[j][j]-dis[i][j];
			for (k=0;k<3;k++)
			{
				if (k==i||k==j||flag[k]) continue;
				sum+=dis[k][k]-dis[j][k];
				if (c==3) ans=min(ans,sum);
				sum-=dis[k][k]-dis[j][k];
			}
			if (c==2) ans=min(ans,sum);
			sum-=dis[j][j]-dis[i][j];
		}
		if (c==1) ans=min(ans,sum);
	}
	if (c==0) ans=max(dis[0][0],max(dis[1][1],dis[2][2]));
	cout<<ans<<endl;
    return 0;
}
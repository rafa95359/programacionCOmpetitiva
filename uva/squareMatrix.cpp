#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	Long n;
	cin>>n;
	para(i,0,n)	{
		char a,b;
		Long x;
		cin>>a>>b>>x;
		Long arr[x][x];
		para(j,0,x){
			para(k,0,x){
				cin>>arr[j][k];
			}
		}
		bool res=true;
		para(j,0,x){
			para(k,0,x){
				if(arr[j][k]!=arr[x-j-1][x-k-1]){
					res =false;
				}
			}
		}
		if(res)cout<<"Test #"<<i+1<<": Symmetric."<<endl;
		else cout<<"Test #"<<i+1<<": Non-symmetric."<<endl;
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
Long mod=998244353;
Long power(Long a,Long p) {
	Long res=1;
	while(p) {
		if(p&1) res=res*a%mod;
		a=a*a%mod;
		p>>=1;
	}

	return res;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long n,m;
    cin>>n>>m;
    string a,b;
    cin>>a>>b;
    vector<Long> resp;
    Long sum=0;
    para(i,0,m){
        sum+=b[i]-'0';
    }
    para(i,0,min(n,m)){
        if(a[n-i-1]=='1'){
            resp.push_back(sum);
            sum-=b[m-1-i]-'0';
        }
        else{
            resp.push_back(0);
            sum-=b[m-1-i]-'0';
        }
    }
    Long ans=0;
    para(i,0,resp.size()){       
        
        ans=(ans+resp[i]*power(2,i))%mod;
    }   
    cout<<ans<<endl;
    
    return 0;
}
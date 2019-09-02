#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<=n;i++)
#define N 1000000
typedef long long Long ;
Long dp[2005][2005];
string x,y;
Long n,m;
Long editDistance(){
    
    n=x.size();
    m=y.size();
    para(i,0,n){
        para(j,0,m){
            if(i==0){
                dp[i][j]=j;
            }else if(j==0){
                dp[i][j]=i;
            }else if(x[i-1]==y[j-1]){
                dp[i][j]=dp[i-1][j-1];
            }else{

                dp[i][j]=1+min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]});
            }
        }
    }
     para(i,0,n){
        para(j,0,m){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    return dp[n][m];

}
Long num=1;
void rec(Long n,Long m){
    if(n==0 || m==0){
        if(n==0 && m==0){
            return;
        }
        if(m!=0){
            rec(n,m-1);
            cout<<num<<" Insert "<<m<<","<<y[m-1]<<endl;
            num++;
            
        }else if(n!=0){
            rec(n-1,m);
            cout<<num<<" Delete "<<n<<endl;
            num++;
        }        
    }
    else{
        if(x[n-1]=y[n-1]){
            rec(n-1,m-1);
            }else{
            if(dp[n-1][m-1]==dp[n][m]){
                rec(n-1,m-1);
            }
            else if(dp[n-1][m]==min({dp[n-1][m],dp[n][m-1],dp[n-1][m-1]})){
                rec(n-1,m);
                cout<<num<<" Delete "<<n-1<<endl;
                x.erase(n-1,1);
                num++;
                
            }else if(dp[n][m-1]==min({dp[n-1][m],dp[n][m-1],dp[n-1][m-1]})){
                rec(n,m-1);
                cout<<num<<" Insert "<<n-1<<","<<y[m-1] <<endl;
                x.insert(n-1,1,y[m-1]);
                num++;
            }else{
                rec(n-1,m-1);
                cout<<num<<" Replace "<<n-1<<","<<y[m-1]<<endl;
                x[n-1]=y[m-1];
                num++;
            }

        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while(cin>>x>>y){
        cout<<editDistance()<<"\n";
        rec(n,m);
        num=1;
        cout<<endl;

    }
    return 0;
}
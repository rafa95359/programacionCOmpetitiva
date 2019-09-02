#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    Long n=s.size();
    if(n%2==0)cout<<n/2<<endl;
    else{
        Long con=0;
        para(i,0,n){
            if(s[i]=='1')con++;
        }
        if(con>1){
            cout<<(n+1)/2<<endl;
        }else cout<<n/2<<endl;
    }
    return 0;
}
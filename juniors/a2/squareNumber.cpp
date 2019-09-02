#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a,b;
    while(cin>>a>>b && a!=0){

        Long x=sqrt(a);
        Long y=sqrt(b);
        Long resp=y-x;
        if(x*x==a)resp++;
        cout<<resp<<"\n";
    }
    return 0;
}
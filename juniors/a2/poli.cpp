#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long n;
    cin>>n;
    Long arr[3];
    para(i,0,3)cin>>arr[i];

    if(arr[0]+arr[1]+arr[2]==n)cout<<3<<endl;
    else if(arr[0]+arr[1]==n || arr[1]+arr[2]==n || arr[0]+arr[2]==n)cout<<2<<endl;
    else cout<<1<<endl;
    return 0;
}
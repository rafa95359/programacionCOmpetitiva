#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long t;
    cin>>t;
    para(i,0,t){
        Long n;
        cin>>n;
        Long resp=0;
        Long goals[n],fouls[n];
        para(j,0,n){
            cin>>goals[j];
        }
        para(j,0,n)cin>>fouls[j];

        para(j,0,n){
            resp=max(resp,20*goals[j]-10*fouls[j]);
        }
        cout<<resp<<endl;
    }


    return 0;
}
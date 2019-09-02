#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long n,m;
    cin>>n>>m;
    Long r=m/n;
    if(r*n!=m)cout<<-1<<endl;
    else{
        Long com=0;
        while(r%2==0){
            r=r/2;
            com++;
        }
        while(r%3==0){
            r=r/3;
            com++;
        }
        if((r==1 ))cout<<com<<endl;
        else cout<<-1<<endl;

    }

    return 0;
}
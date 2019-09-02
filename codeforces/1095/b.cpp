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
    vector <Long > x;
    para(i,0,n){
        Long aux;
        cin>>aux;
        x.push_back(aux);

    }   
    sort(x.begin(),x.end());

    if(n==2)cout<<0<<endl;
    else{
        cout<<min(x[n-1]-x[1],x[n-2]-x[0]);
    }
    return 0;
}
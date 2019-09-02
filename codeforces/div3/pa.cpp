#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int q;
    cin>>q;
    para(i,0,q){
        Long n,k;
        cin>>n>>k;
        set <Long> x;
        para(j,0,n){
            Long aux;
            cin>>aux;
            x.insert(aux);
        }
        Long ini=*x.begin();
        Long fin=*--x.end();
        if(ini+k<fin-k)cout<<-1<<"\n";
        else{
            cout<<ini+k<<"\n";
        }
    }
    return 0;
}
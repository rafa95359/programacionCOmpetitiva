#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
#define p 1000000007
typedef long long Long ;
Long runas(Long n){
    Long ans = 1;
    Long x=2;
    while ( n ){
        if( n & 1 )ans = ( ans * x )%p;
        x = (x*x)%p;
        n >>= 1;
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long t;
    cin>>t;
    para(i,0,t){
        Long n;
        cin>>n;
        map<Long,Long> x;
        para(j,0,n){
            Long aux;
            cin>>aux;
            x[aux]++;
        }
        auto it = x.end();
        it=--it;
        Long resp=runas(it->second)-1;
        //cout<<"resp "<<resp<<endl;
        if(resp<0)resp+=p;
        cout<<resp%p<<endl;



    }
    return 0;
}
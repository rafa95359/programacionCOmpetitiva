#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;

int pr[ 1000002 ];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long k;
    cin>>k;
    memset( pr , -1 ,sizeof(pr) );
    for ( long long i = 2; i*i<= 1000000; i++){
        for ( long long j = i*i; j<= 1000000; j+=i ){
            pr[ j ] = i;
        }
    }

    for(int i=0;i<k;i++){
        Long n;
        cin>>n;
        Long aux=sqrt(n);
        if(n==1){
            cout<<"NO"<<"\n";
            continue;
        }
        if(aux*aux==n && pr[ aux ] == -1 )cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
        
    }



    return 0;
}

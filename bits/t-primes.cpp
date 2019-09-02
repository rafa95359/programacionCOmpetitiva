#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
Long MAX =100000;
Long arrr[1000000];
int pr[1000000];

bool criba(Long n){
    for ( int i = 2; i*i<=100000;i++)
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long k;



    cin>>k;
    for(int i=0;i<k;i++){
        Long n;
        cin>>n;
        double aux=sqrt(n);
        if(n==1){
            cout<<"NO"<<"\n";
            continue;
        }
        if(aux!=(int)aux){
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<"\n";
        
    }
    return 0;
}
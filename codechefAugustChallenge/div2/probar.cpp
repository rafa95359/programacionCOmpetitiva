#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(Long i=a;i<n;i++)
#define N 1000000
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long m;
    cin>>m;
    para(i,m,m+10){
        Long aux=i*(i+1);
        Long aux2=aux/2;
        
        Long resp1=aux2%m;
        Long aux3=(i%m)*((i+1)%m);
        Long aux4=aux3/2;
        Long resp2=aux4%m;
        if(resp1!=resp2){
            cout<<i<<" "<<i+1<<" "<<aux<<" "<<aux2<<" "<<aux3<<" "<<aux4<<" "<<resp1<<" "<<resp2<<endl;
        }
    
    }
    return 0;
}
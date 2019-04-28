#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long i,j;
    para(n,1,6){
        para(m,1,6){
            Long aux;
            cin>>aux;
            if(aux==1){
                i=n;
                j=m;
            }
        }
    }

    cout<<abs(j-3)+abs(i-3)<<endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
typedef long long Long ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long n,k;
    cin>>n>>k;  
    string x;
    cin>>x;
    Long con=1,sum=0;
    while(con!=k){
        for(int i=1;i<=n && con<k ; i++){
            cout<<" i "<<i<<endl;
            for(int j=0;j+i<=n;j++){
                
                if(j==0){
                    con++;
                    sum+=i;
                }
                if(j+i<n && x.substr(j,i)!=x.substr(j+1,i)){
                    sum+=i;
                    con++;
                }
                
                cout<<j<<" "<<i<<" "<<sum<<" "<<con<<endl;
                if(con==k){
                    cout<<sum<<endl;
                    return 0;
                }
            }
        }
        cout<<-1<<endl;
        return 0;
    }
    cout<<sum<<endl;
    return 0;
}
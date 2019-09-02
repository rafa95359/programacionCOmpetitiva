#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(Long i=a;i<n;i++)
#define N 1000000
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long t;
    cin>>t;
    para(j,0,t){
        Long n;
        cin>>n;
        Long arr[(n+1)];
        memset(arr,0,sizeof(arr));
       
        para(i,0,n){
            Long aux;
            cin>>aux;
            Long menor=max(Long(0),(i-aux));
            Long mayor=min(n-1,i+aux);
            arr[menor]++;
            arr[mayor+1]--;        
        }
        para(i,0,n){
            arr[i+1]+=arr[i];
        }
        
        sort(arr,arr+n);
        Long salud[n];
        para(i,0,n){
            cin>>salud[i];
        }
        sort(salud,salud+n);
        bool sePuede=true;
        para(i,0,n){
            if(salud[i]!=arr[i]){
                sePuede=false;
                break;
            }
        }
        if(sePuede)cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }   
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long n,r;
    cin>>n>>r;
    Long arr[n],alum[n]={0};
    para(i,0,n){
        cin>>arr[i];
        if(arr[i]==1){           
            para(j,max(0LL,i-r+1),min(n,i+r)){
                alum[j]++;
            }
        }
    }
    para(i,0,n){
        if(alum[i]==0){
            cout<<-1<<endl;
            return 0;
        }
    }
    Long can=0;
    para(i,0,n){
        if(arr[i]==1){
            bool necesario=false;
            para(j,max(0LL,i-r+1),min(n,i+r)){
                if(alum[j]==1){                    
                    necesario=true;
                    can++;
                    break;
                }
            }
            if(!necesario){
                para(j,max(0LL,i-r+1),min(n,i+r)){
                    alum[j]--;
                }
            }
               
        }
    }
    if(can==0)cout<<-1<<endl;
    else cout<<can<<endl;
    
    return 0;
}
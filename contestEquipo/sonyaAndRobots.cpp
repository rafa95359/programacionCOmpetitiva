#include <bits/stdc++.h>
typedef long long Long;
#define para(i,a,n) for(Long i=a;i<n;i++)
#define pb push_back
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long n;
    cin>>n;
    map<Long,Long> can;
    Long arr[n],dif[n+1];


    para(i,0,n){
        cin>>arr[i];
    }
    dif[n]=0;
    para(i,0,n){
        if(can[arr[n-1-i]]==0){
            dif[n-1-i]=dif[n-i]+1;
            can[arr[n-1-i]]++;
        }
        else{
            dif[n-1-i]=dif[n-i];
        }
    }
    Long resp=0;
    //para(i,0,n){
    //    cout<<dif[i]<<endl;
    //}    
    para(i,0,n-1){
        if(can[arr[i]]>0){
            resp+=dif[i+1];
            can[arr[i]]=0;
        }        

    }
    cout<<resp<<endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
Long arr[1000000];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long n,k;
    cin>>n>>k;
    Long num[n];
    para(i,n){
        cin>>num[i];
    }    
    para(i,k){
        Long a,b;
        cin>>a>>b;
        
        arr[a-1]++;
        arr[b]--;
        
    }
    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }
    sort(num,num+n);    
    sort(arr,arr+n+1);

    Long sum=0;
    for( Long i=n;i>0;i--){         
        sum+=arr[i]*num[i-1];        
        if(arr[i]==0){
            break;
        }
    }
    cout<<sum<<endl;
    return 0;
}

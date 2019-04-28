#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
int main(){
    Long n;
    cin>>n;
    Long arr[n];
    Long sum=0,sum2;
    para(i,n){
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n);
    sum2=sum;   
    if(n>1)sum+=sum;
    para(i,n-2){
        sum2-=arr[i];
        sum+=sum2;        
    }
    cout<<sum<<endl;
    return 0;
}

#include <bits/stdc++.h>
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
using namespace std;

int main(){
    Long n,a,b;
    cin>>n>>a>>b;
    Long primer;
    cin>>primer;
    Long sum=primer;
    Long arr[n-1];
    para(i,n-1){
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n-1);
    Long resp=0;

    if(primer*a>=b*sum){
       cout<<0<<endl ;
       return 0;
    }
    for(Long i=0;i<n-1;i++){        
        resp++;
        sum-=arr[n-2-i];
        if(primer*a>=b*sum)break;        
    }
    cout<<resp<<endl;


    return 0;
}
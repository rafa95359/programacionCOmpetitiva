#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
int main(){
    Long n;
    cin>>n;
    Long arr[n];

    para(i,n){
        cin>>arr[i];
        if(arr[i]%2==0)arr[i]--;
    }
    para(i,n){
        cout<<arr[i]<<endl;
    }
    

    

    return 0;
}

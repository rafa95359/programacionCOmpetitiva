#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
int main(){
    Long arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr,arr+3);
    arr[2]-=arr[0];
    arr[1]-=arr[0];
    if(arr[2]==0){
        cout<<0<<endl;
        return 0;
    }
    if(arr[2]==arr[1]){
        cout<<2*arr[2]-arr[1]-1;
    }else{

    cout<<2*arr[2]-arr[1]-2;
    
    }
    

    return 0;
}

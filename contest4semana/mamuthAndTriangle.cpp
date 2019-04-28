#include <bits/stdc++.h>
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    para(i,n){
       cin>>arr[i];
   }
   sort(arr,arr+n);

   for(Long i=0;i<n-2;i++){
       if(arr[i]+arr[i+1]>arr[i+2]){
           cout<<"YES"<<endl;
           return 0;
       }
   }
   cout<<"NO"<<endl;
}
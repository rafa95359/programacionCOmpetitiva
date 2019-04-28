#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
int main(){
    Long n;
    cin>>n;
    
        Long can=2,arr[n][2];
        para(i,n)  
            cin>>arr[i][0]>>arr[i][1];
        if(n>1){

            for (Long i=1;i<n-1;i++){
            if(arr[i][0]-arr[i][1]>arr[i-1][0]){
                can++;
            }
            else if(arr[i][0]+arr[i][1]<arr[i+1][0]){
                can++;
                arr[i][0]=arr[i][0]+arr[i][1];

            }   
            }   
            cout<<can<<endl;
        }    
        else{
        cout<<1<<endl;
         }

    return 0;
}

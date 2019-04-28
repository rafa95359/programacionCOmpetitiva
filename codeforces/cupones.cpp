#include <bits/stdc++.h>
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
using namespace std;

int main(){
    Long n;
    cin>>n;
    int arr[n];
    para(i,n){
        cin>>arr[i];
    }
    para(i,n-1){
        if(arr[i]<0){
            cout<<"NO"<<endl;
            return 0;
        }
        if(arr[i]!=0){            
            if(arr[i]%2 !=0){               
                if(arr[i+1]%2==0){                    
                    arr[i+1]--;
                }
                else{
                    arr[i+1]=0;
                }
            }
            else{
                if(arr[i+1]%2==0) arr[i+1]=0; 
            }
            arr[i]==0;

        }
        
    }
    if(arr[n-1]%2==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}

    #include <bits/stdc++.h>
    using namespace std;
    typedef long long Long;
    #define para(i,n) for(Long i=0;i<(Long)n;i++)
    int main(){
        Long n,k;
        cin>>n>>k;
        Long arr[n];
        para(i,n){
            cin>>arr[i];

        }
        sort(arr,arr+n);
        Long x=0;
        if(k==n){
            cout<<arr[n-1]<<endl;
        }
        else{
            if(k==0){
            if(arr[0]>1){
                cout<<1<<endl;
            }
            else{
                cout<<-1<<endl;
            }
            
        }        
            else{
            if(arr[k-1]!=arr[k]){
                cout<<arr[k-1]<<endl;
            }
            else{
                cout<<-1<<endl;
            }
            }
        }
        
        
        return 0;
    }

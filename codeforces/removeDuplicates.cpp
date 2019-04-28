#include <bits/stdc++.h>
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    para(i,n){
        int t;
        cin>>t;
        arr.push_back(t);
    }    
    int tam=0;
    for ( int i= n-1;i>0;i=i-1-tam){     
        int aux=arr[i];  
        tam=0;
        for (int k=i-1;k>=0;k=k-1){            
            if(arr[k] == aux){  
                arr.erase(arr.begin()+k);
                tam++;                
            }
        }
        
    }
    
    cout<<arr.size()<<endl;
    para(i,arr.size()){        
        cout<<arr[i]<<" ";
        
    }
    return 0;
}

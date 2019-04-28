#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
Long arr[1001];
Long potencia(Long n,Long a){
    Long resp=1;
    para(i,a){
        resp*=n;
    }
    return resp;    
}
int main(){
    Long n;
    cin>>n;       
    vector<Long> resp;
    
    for( Long i=2;i<n+1;i++){
        if(arr[i]==0){         
            for(Long r=1;potencia(i,r)<=n;r++){
                                                          
                resp.push_back(potencia(i,r));                                 
            }
       
            for(Long m=i;m<=n;m+=i){
                arr[m]=10;
            }
            
        }
    }
    cout<<resp.size()<<endl;    
    para(i,resp.size()){
        cout<<resp[i]<<" ";
    }

    return 0;
}

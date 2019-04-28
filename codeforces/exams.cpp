#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)


int main(){
    Long n;
    cin>>n;
    Long a[n][2];
    para(i,n){
        cin>>a[i][0]>>a[i][1];
    }
    
    //para(i,n-1){        
    //    for(Long j=i;j<n;j++){
    //        if(a[i][0]>a[j][0] || (a[i][0]==a[j][0] && a[i][1]>a[j][1])){
    //            swap(a[i][0],a[j][0]);
    //            swap(a[i][1],a[j][1]);
    //        }                   
    //    }
    //}
    for (Long i =1 ;i < n;i++){
        Long j=i;        
        while(j>0){           
                          
            if(a[j-1][0]>a[j][0] || (a[j-1][0]==a[j][0] && a[j-1][1]>a[j][1])){
                swap(a[j-1][0],a[j][0]);
                swap(a[j-1][1],a[j][1]);
                j--;
            }
            else{
                j=-1;
            }            
            
        }        
    }
    
    Long resp=0;
    
    para(i,n){
        if(a[i][1] >= resp){
            resp=a[i][1];
        }
        else{
            resp=a[i][0];
        }

    }
    cout<<resp;
    return 0;
}

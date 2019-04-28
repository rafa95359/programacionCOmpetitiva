#include <bits/stdc++.h>
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
using namespace std;

int main(){
    Long n,x,y;
    cin>>n>>x>>y;
    Long arr[n][2];
    para(i,n){
        cin>>arr[i][0]>>arr[i][1];
    }
    Long resp=0;
    para(i,n){
        
        if(arr[i][1]!=10005){
            Long a=arr[i][0]-x;
            Long b=y-arr[i][1];
            Long c=x*arr[i][1]-y*arr[i][0];
            resp++;
            for(Long j=i+1;j<n;j++){
                if(a*arr[j][1]+b*arr[j][0]+c==0){
                    arr[j][1]=10005;
                }        
            
            }


        }
        
    }
    cout<<resp;
    return 0;
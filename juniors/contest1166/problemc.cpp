#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long n;
    cin>>n;
    Long arr[n];
    para(i,0,n){
        cin>>arr[i];
    }   
    sort(arr,arr+n);
    Long sum=0;
    para(i,0,n){
        if(arr[i]<0){
            Long nega,posi,posi2;
            if(arr[i]%2==0){
                nega=arr[i]/2;
                posi=abs(arr[i])/2;
                posi2=abs(arr[i])*2;
            }
            else {
                nega=arr[i]/2-1;
                posi=abs(arr[i])/2+1;
                posi2=abs(arr[i])*2;
            }
            
            para(j,i+1,n){
                if(arr[j]<0 && arr[j]<=nega)sum++;
                if(arr[j]>0 && arr[j]>=posi && arr[j]<=posi2)sum++;
                if(arr[j]>posi2)break;
            }


            
        }
        if(arr[i]>0){
            para(j,i+1,n){
                if(arr[j]<=2*arr[i])sum++;
            }
        }
    
    }
    cout<<sum<<endl;
    return 0;
}
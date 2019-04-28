#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long n,t;
    cin>>n>>t;
    Long arr[n];   
    para(i,0,n){
        Long a,b;
        cin>>a>>b;
        if(a<t){
            Long ayu =  max(0LL,(t-a)/b+((t-a)%b ==0?0:1));
            arr[i]=b*ayu+a;
        }
        else{
            arr[i]=a;

        }
      

    }
    Long resp=0;
    Long min=1e10;
    para(i,0,n){
        
        if(arr[i]<min){
            min=arr[i];
            resp=i;
        }

    }
    cout<<resp+1<<endl;
    return 0;
}
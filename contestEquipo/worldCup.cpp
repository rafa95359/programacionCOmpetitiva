#include <bits/stdc++.h>
typedef long long Long;
#define para(i,a,n) for(Long i=a;i<n;i++)
#define pb push_back
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long n;
    cin>>n;
    Long arr[n];
    para(i,0,n){
        Long aux;
        cin>>aux;
        Long aux2;
        if(aux-i>=0){
            aux2=i+((aux-i)/n+((aux-i)%n==0?0:1))*n;
        }else{
            aux2=i;
        }     
       arr[i]=aux2;       
    }
    Long min=arr[0];
    Long resp=1;
    para(i,1,n){       
  
        if(arr[i]<min){
            min=arr[i];
            resp=i+1;
        }
    }
    cout<<resp<<endl;
     return 0;
}
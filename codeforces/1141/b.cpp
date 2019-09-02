#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long n;
    cin>>n;
    Long arr[n];
    Long maxd=0;
    para(i,0,n){
        cin>>arr[i];
    }   
    Long con=0;
    para(i,0,n){
        if(arr[i]==1){
            con++;
            if(con>maxd)maxd=con;
        }
        else{
            con=0;           
        }
    }
    para(i,0,n){
        if(arr[i]==1){
            con++;
            if(con>maxd)maxd=con;
        }
        else{
            con=0;           
        }
    }
    cout<<maxd<<endl;
    return 0;
}
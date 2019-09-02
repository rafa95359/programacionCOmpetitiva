#include <bits/stdc++.h>
typedef long long Long;
#define para(i,n) for(int i=0;i<(Long)n;i++)
typedef long double Double;
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    para(i,n){
        cin>>arr[i];
    }
    para(i,n){
        int aux=arr[i];
        if(aux!=-1){

        for(int j=i+1;j<n;j++){
            if(arr[j] == aux) arr[j]=-1;
        }
        }
    }
    int can=0;
    para(i,n){
        if(arr[i]!=-1){
            can++;
        }
    }
    if(can>=m){
        cout<<"YES"<<endl;
        int coun=0;
        int  k=0;
        while(coun<m){
            if(arr[k]!=-1){
                cout<<k+1<<" ";
                coun++;
            }
            k++;
        }
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}
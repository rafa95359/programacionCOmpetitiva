#include <bits/stdc++.h>
typedef long long Long;
#define para(i,n) for(int i=0;i<(Long)n;i++)
typedef long double Double;
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    para(i,n){
        cin>>arr[i];
    }
    int max=0;
    para(i,n){
        int aux=arr[i];
        int can=0;
        for(int j=i;j<n;j++){
            if(arr[j]==aux)can++;
        }
        if(can>max)max=can;
    }
    cout<<max<<endl;


    return 0;
}
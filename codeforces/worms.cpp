#include <bits/stdc++.h>
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
using namespace std;
int arr[1000001];
void pintar(int arr[],int inicio,int fin,int valor){
    for (int i=inicio;i<=fin;i++){
        arr[i]=valor;
    }
}
int main(){
    int n;
    cin>>n;
    int sum=0;
    int inicio=1;
    para(i,n){
        int t;
        cin>>t;
        sum+=t;        
        pintar(arr,inicio,sum,i+1);
        inicio=sum+1;        

    }
    
    int k;
    cin>>k;
    para(i,k){
        int t;
        cin>>t;
        cout<<arr[t]<<endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;



int numero(int fin,int a,int l,int r){    
    if(fin==1) return 0;//

    int nrLinterna = fin/a;

    int linternaEnTren= r/a-l/a;
    if(l%a==0) linternaEnTren++;
    return nrLinterna -linternaEnTren;


}

int main(){
    int n;
    cin>>n;
    int arr[n][4];
    for(int i=0;i<n;++i){
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2]>>arr[i][3];
    }
    for(int i=0;i<n;++i){
        cout<<numero(arr[i][0],arr[i][1],arr[i][2],arr[i][3])<<endl;
    }   
    

    return 0;
}
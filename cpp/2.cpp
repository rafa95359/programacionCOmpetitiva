#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,aux;
    cin>>n;
    int arr[n+2];
    arr[0]=0;
    arr[n+1]=3002;
    for (int i=1;i<n+1;i++) {
        cin>>arr[i];               
    };
    for (int i=1;i<n;i++) {
        for (int j = i+1; j < n+1; j++) {
            if (arr[i] > arr[j]) {
                aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
            }
        }
    }    
    for (int i=0;i<n+1;i++) {
      if (arr[i+1] != arr[i]+1){
            cout << arr[i]+1<<endl;
            break;
      }
    };
    return 0;
}

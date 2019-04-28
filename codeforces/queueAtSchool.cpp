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
    string arr;
    cin>>arr;
    Long can=0;
    while(can<t){
        para(i,0,n-1){
            if(arr[i]=='B' && arr[i+1]=='G'){
                swap(arr[i],arr[i+1]);
                i++;
            }

        }
        can++;
    }
    cout<<arr<<endl;
    
    return 0;
}
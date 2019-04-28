#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)

int main(){
    Long n,m;
    cin>>n>>m;
    Long arr[n];

    para( i,n){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    Long sum=0,k=0;
    vector <Long> resp;
    for( Long i=1;sum+i<=m;i++){
        if( i!=arr[k]){
            resp.push_back(i);
            sum+=i;
        }
        else{
            k++;
        }
    }
    cout<<resp.size()<<endl;
    para(i,resp.size()){
        cout<<resp[i]<<" ";
    }

    return 0;
}

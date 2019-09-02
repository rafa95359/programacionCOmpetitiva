#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long t;
    cin>>t;
    para(i,0,t){
        Long x;
        cin>>x;
        Long arr[3]={0,0,0};        
        para(i,0,x){
            Long aux;
            cin>>aux;
            arr[aux%3]+=1;
        }
        Long resp=arr[0];
        Long b=min(arr[1],arr[2]);
        resp+=b;
        arr[1]-=b;
        arr[2]-=b;
        resp+=arr[1]/3;
        resp+=arr[2]/3;
        cout<<resp<<endl;
    }
    return 0;
}
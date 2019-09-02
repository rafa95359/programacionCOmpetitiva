#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long m;
    cin>>m;
    Long n=m-1;
    Long arr[n];
    para(i,0,n) cin>>arr[i];

    Long sum=0;
    Long pre=0;
    para(i,0,n){
        //cout<<arr[i]<<" "<<pre<<endl;
        pre=arr[i]+pre;
        sum+=pre;
    }
    //cout<<sum<<endl;
    Long sumTotal=((n+1)*(n+2))/2;
    Long x=(sumTotal-sum)/(n+1);
    if(x*m+sum!=sumTotal){
        cout<<-1<<endl;
        return 0;
    }
    set<Long>r;
    r.insert(x);
    Long prev2=x;
    para(i,0,n){
        r.insert(prev2+arr[i]);
        prev2+=arr[i];
    }
    if(r.size()!=m || *r.begin()!=1 || *--r.end()!=m){
        cout<<-1<<endl;
        return 0;
    }
    cout<<x<<" ";
    Long prev=x;
    para(i,0,n){
        cout<<prev+arr[i]<<" ";
        prev+=arr[i];
    }
    
    //1 1 1 1

    //0 1 2 3 4 

    

 
    return 0;
}
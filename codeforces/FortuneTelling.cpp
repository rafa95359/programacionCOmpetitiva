#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
int main(){
    int n;
    cin>>n;   
    int imparMenor=101;   
    int sum=0;
    para(i,n){
        int t;
        cin>>t;
        sum+=t;
        if(t%2!=0){           
            if(t<=imparMenor) imparMenor=t;
        }

    }
    if(sum%2==1){
        cout<<sum;       
    }else{
        if(imparMenor!=101)cout<<sum-imparMenor;
        else cout<<0<<endl;
    }

    
    return 0;
}

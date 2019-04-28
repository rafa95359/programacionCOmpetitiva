#include <bits/stdc++.h>
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
using namespace std;
int main(){
    Long n,k;
    cin>>n>>k;
    Long can=0;
    vector<Long> a;
    vector<Long> b;
    
    if(n==1){
        if(k==1)cout<<1<<endl;
        else cout<<-1<<endl;
        return 0;
    }

    a.push_back(1);
    b.push_back(n);

    Long finale=sqrt(n)+1;

   
    for (Long i=2;i< finale;i++){
        if(n%i==0){
            a.push_back(i);            
            if(i*i !=n)b.insert(b.begin(),n/i);    
            
        }
        if(a.size()==k){
            break;
        }
        if(i*i>n && a.size()+b.size()==2){                
                break;
        }
    }
   

    if(a.size()+b.size()>=k){
        if(k>a.size()){
            cout<<b.at(k-a.size()-1)<<endl;
        }
        else{
            cout<<a[k-1]<<endl;
        }
    }
    else{ 
        cout<<-1<<endl;
    }


    
    


    return 0;
}

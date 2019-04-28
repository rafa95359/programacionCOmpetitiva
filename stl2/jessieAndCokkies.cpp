#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
int main(){
    Long n,k;
    cin>>n>>k;
    priority_queue<Long , vector<Long> , greater<Long> > dul;
    para(i,n){
        Long aux;
        cin>>aux;
        dul.push(aux);        
    }
    
    Long op=0;
    while(dul.top()<k){        
         if(dul.size()==1){
             op=-1;
             break;
         }
         op++;
         Long uno=dul.top();
         dul.pop();
         Long dos=dul.top();
         dul.pop();
         Long tres=uno+2*dos;
         dul.push(tres);
    }
    cout<<op<<endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long n;
    cin>>n;
    priority_queue <Long> q;
    para(i,0,n){
        Long aux;
        cin>>aux;
        q.push(aux);
    }  
    set<Long> inc;
    set<Long> dec;
    while(!q.empty()){
        Long a=q.top();
        q.pop();            
        if(q.empty()){            
            dec.insert(-a);
            break;
        }        
        Long b=q.top();   
        if(a==b){            
            inc.insert(a);
            dec.insert(-b);
            q.pop();
        }else{
            inc.insert(a);
        }
    }   

    if(inc.size()+dec.size()!=n)cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        cout<<inc.size()<<endl;
        for(auto x:inc){
            cout<<x<<" ";
        }
        cout<<endl;
        cout<<dec.size()<<endl;
        for(auto x:dec){
            cout<<-x<<" ";
        }
        cout<<endl;

    }
    return 0;
}
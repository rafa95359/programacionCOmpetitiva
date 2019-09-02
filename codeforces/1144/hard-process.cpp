#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long n,k;
    cin>>n>>k;
    queue<Long> zero,uno;
    vector<Long> x;
    para(i,0,n){
        Long aux;
        cin>>aux;
        x.push_back(aux);
    }
    Long ini=x[0],con=1;
    para(i,1,n){
        if(ini==x[i]){
            con++;
        }
        else{
            if(ini==0){
                zero.push(con);
            }else{
                uno.push(con);
            }
            con=1;
            ini=x[i];
        }
    }
    queue<Long> c,d;
    c=zero;
    d=uno;
    Long a=-1;
    Long maxim=0;
    Long con=1;
    if(x[0]==1){
        maxim=uno.front();
        if(zero.size()!=0) maxim+=min(zero.front(),k);        
        a=0;
        uno.pop();
    }
    
    while(uno.size()!=0){
        Long value=uno.front();        
        value+=zero.front();
        zero.pop();       
        if(zero.size()!=0)value+=zero.front();
        value=min(value,k+uno.front());
        uno.pop();        
        if(value>maxim){
            maxim=value;
            a=con;

        }
        con++;        
    }
    Long con2=0;
    if(x[0]==1){
        
    }
    else{
        if(a==)
        con2++;
        
    }
        
    
        
    while(d.size!=0){            
        para(i,0,d.front())cout<<1<<" ";
        d.pop();
        if(c.size()!=0){
            para(i,0,c.front())cout<<0<<" ";
            c.pop();
        }
    }
    if(!c.empty())para(i,0,c.front())cout<<0<<" ";


    return 0;
}
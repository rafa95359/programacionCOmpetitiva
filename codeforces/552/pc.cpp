#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long a,b,c;
    cin>>a>>b>>c;
    Long k1=0,k2=0,k3=0;
    if(a>=3){
        k1=a/3;
    }
    if(b>=2)k2=b/2;
    if(c>=2)k3=c/2;
    Long resp=0;
    Long k=min({k1,k2,k3});
        a-=k*3;
        b-=k*2;
        c-=k*2;
        resp+=k*7;
        cout<<k<<endl;
        cout<<resp<<endl;
        cout<<a<<" "<<b<<" "<<c<<endl;
        if(a==0){
            cout<<resp<<endl;
            return 0;
        }
        if(a>1){
            if( b==0){
                if()
                resp+=2;
            }else{
                if(c==0){
                    resp+=2+min(b,(Long)2);
                }else{                    
                    resp+=min(a,(Long)3)+min(b,(Long)2)+min(c,(Long) 2);
                }

            }
        }else{
            if(b==0){
                resp+=1;
            }else{                
                resp+=2+min(c,(Long) 1);
            }
        }
        cout<<resp<<endl;
    return 0;
}
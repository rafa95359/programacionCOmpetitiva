#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
int main(){
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //cout.tie(NULL);
    Long n;
    cin>>n;
    
    Long max1=0,may2=0;


    para(i,n){
        char consulta;
        cin>>consulta;
        Long x,y;
        cin>>x>>y;
        if( consulta =='+'){           
            if(max(x,y) > max1 ){
                max1 = max(x,y);                    
            }
            if(min(x,y)>may2 ){                    
                may2 = min(x,y);
            }
            
        }
        else{
            if(max(x,y)>=max1 && min(x,y)>=may2){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    
    return 0;
}

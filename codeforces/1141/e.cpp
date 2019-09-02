#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define deb(x) cout<<#x<<" "<<x<<"\n";
#define N 1000000
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long h,n;
    cin>>h>>n;
    vector<Long> sump;
    bool murio=false;
    Long resp=0;
    para(i,0,n){
        Long aux;
        cin>>aux;       
        if(i==0)sump.push_back(aux);
        else sump.push_back(aux+sump[i-1]);
        if(h+sump[i]<=0){
            if(!murio)resp=i+1;
            murio=true;
        }
    }

    if(!murio && sump[n-1]>=0){
        cout<<-1<<'\n';
    }else if(murio){
        cout<<resp<<"\n";
    }else{        
        Long desc=abs(sump[n-1]);
        bool hayResp=false;
        //deb(desc);
        para(i,0,n){
            Long rot=(h+sump[i])/desc;
            if((h+sump[i])%desc!=0)rot++;
            //cout<<i<<" "<<rot<<"\n";
            //cout<<rot*desc-sump[i]<<"\n";
            if(!hayResp && rot*desc-sump[i]>=h ){
                resp=rot*n+i+1;
                hayResp=true;

            }    
            else if(hayResp && rot*desc-sump[i]>=h && rot*n+i+1<resp){
                resp=rot*n+i+1;
            }
            
        }

        cout<<resp<<"\n";

    }

    
    


    return 0;
}
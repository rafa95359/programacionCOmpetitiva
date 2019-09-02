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
    map<Long,map<Long,Long>> x;
    
    para(i,2,10e6+1){
        para(j,i,10e6+1){            
            x[i][j]=1;
            j+=i;
        }
    }
    map<Long,map<Long,Long>> arr[5];
    arr[0]=arr[1]=arr[2]=arr[3]=arr[4]=x;
    para(i,0,t) {
        Long n;
        cin>>n;
        set<Long> se;
        map<Long,bool> y;
        map<Long,map<Long,Long>> aux=arr[i];
        para(j,0,n){
            Long aux;
            cin>>aux;
           se.insert(aux);
        }
        Long can=0;
        for(auto l:se){
            if(y[l]==0){
                can++;
                

                  
            }
        }

    

        
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
typedef long long Long ;
map<Long,Long> posiBits;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long n;
    cin>>n;
    map<Long,vector<Long>> dondeEsta;
    para(i,0,n){
        Long aux;
        cin>>aux;
        for(Long j=0;j<64;j++){
            //cout<<(aux>>j)<<" "<<(aux>>j&1)<<endl;
            if((aux>>j&1)==1){
                posiBits[j]++;
                cout<<(aux>>j)<<" "<<(aux>>j&1)<<endl;
                dondeEsta[j].push_back(aux);
            }
        }
    }
    Long match=0;

    para(i,0,64){
        if(match=0 && posiBits[i]>2){
            match=posiBits[i];
            continue;
        }
        if(posiBits[i]>2){
            match=min(match,posiBits[i]);
        }
    }

    return 0;
}

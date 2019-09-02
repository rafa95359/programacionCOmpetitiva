#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long t;
    cin>>t;
    para(i,0,t){
        Long n,resp=0;
        cin>>n;
        Long xors[n+1];
        xors[0]=0;
        para(j,0,n){
            Long aux;
            cin>>aux;
            xors[j+1]=aux xor xors[j];
        }
        map<Long,pair<Long,Long>> m;
        para(j,0,n+1){
            m[xors[j]].first++;
            m[xors[j]].second+=j;
        }
        para(j,0,n-1){
            m[xors[j]].first--;
            m[xors[j]].second-=j;
            if(m[xors[j]].first!=0)resp+=m[xors[j]].second-(j+1)*m[xors[j]].first;0
        }
        cout<<resp<<endl;
    }   
    return 0;
}
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
    string l,r;
    cin>>l>>r;
    map<char,queue<Long>> prim;
    map<char,queue<Long>> sec;
    Long a=0,b=0;

    para(i,0,n){
        prim[l[i]].push(i);
        sec[r[i]].push(i);
    }
    vector <Long> resp[2];
    para(i,0,26){  
        char pos=char('a'+i);
        while(prim[pos].size()!=0 && sec[pos].size()!=0){
            resp[0].push_back(prim[pos].front());
            resp[1].push_back(sec[pos].front());
            prim[pos].pop();
            sec[pos].pop();
        }
    }
    para(i,0,26){
        char pos=char('a'+i);
        while(prim[pos].size()!=0 && sec['?'].size()!=0){
            resp[0].push_back(prim[pos].front());
            resp[1].push_back(sec['?'].front());
            prim[pos].pop();
            sec['?'].pop();
        }
    }
    para(i,0,26){
        char pos=char('a'+i);
        while(sec[pos].size()!=0 && prim['?'].size()!=0){
            resp[1].push_back(sec[pos].front());
            resp[0].push_back(prim['?'].front());
            sec[pos].pop();
            prim['?'].pop();
        }
    }
    while(sec['?'].size()!=0 && prim['?'].size()!=0){
            resp[1].push_back(sec['?'].front());
            resp[0].push_back(prim['?'].front());
            sec['?'].pop();
            prim['?'].pop();
    }
    cout<<resp[0].size()<<'\n';
    para(i,0,resp[0].size()){
        cout<<resp[0][i]+1<<" "<<resp[1][i]+1<<"\n";
    }

    

    return 0;
}
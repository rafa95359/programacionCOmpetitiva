#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
typedef long long Long ;
Long infx=-1e9,infy=-1e9,supx=1e9,supy=1e9;
Long respx=0,respy=0;
bool resp=0;
bool sePuede=true;
void respond(Long x,Long y,Long f1,Long f2,Long f3,Long f4){
    if(f1==0){
        if(x>supx){
           sePuede=false;
            return;
        }
        infx=max(x,infx);
    }
    if(f2==0){
        if(y<infy){
            sePuede=false;
            return;

        }
        supy=min(supy,y);
    }
    if(f3==0){
        if(x<infx){
            sePuede=false;
            return;
        }
        supx=min(x,supx);
    }
    if(f4==0){
        if(y>supy){
            sePuede=false;
            return;
        }
        infy=max(infy,y);
    }
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long q;
    cin>>q;
    para(i,0,q){
        Long n;
        cin>>n;
        infx=-1e9,infy=-1e9,supx=1e9,supy=1e9;
        sePuede=true;
        //cout<<"\n"<<"\n";
        para(j,0,n){
            Long x,y,f1,f2,f3,f4;
            cin>>x>>y>>f1>>f2>>f3>>f4;
            if(sePuede){
                respond(x,y,f1,f2,f3,f4);
            }
            //cout<<infx<<" "<<supx<<" "<<infy<<" "<<supy<<" "<<sePuede<<"\n";
            

        }
        if(sePuede){
            cout<<1<<" ";
            if(infx!=-1e9)cout<<infx<<" ";
            else if(supx!=1e9)cout<<supx<<" ";
            else cout<<0<<" ";
            if(infy!=-1e9)cout<<infy<<"\n";
            else if(supy!=1e9)cout<<supy<<"\n";
            else cout<<0<<"\n";
        }else{
            cout<<"0"<<"\n";
        }
    }   
    return 0;
}
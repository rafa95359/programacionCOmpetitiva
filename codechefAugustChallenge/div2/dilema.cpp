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
        string pal;
        cin>>pal;
        Long impar=0;
        Long con=0;
        para(j,0,pal.size()){
            if(pal[j]=='1')con++;
            else{
                //cout<<"con "<<con<<"\n";
                if(con%2!=0)impar++;
                con=0;
            }
        }
        if(con%2!=0)impar++;
        //cout<<impar<<"\n";
        if(impar%2!=0)cout<<"WIN"<<"\n";
        else cout<<"LOSE"<<"\n";
    }   
    return 0;
}
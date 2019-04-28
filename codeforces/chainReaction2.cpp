#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long n;
    cin>>n;
    Long pos[n],ase[n];
    map <Long,Long> beacon;
    para(i,0,n){
        Long aux;
        cin>>pos[i];
        cin>>aux;
        beacon[pos[i]]=pos[i]-aux;
    }   
    sort(pos,pos+n);
    Long resp=n;     
    para(i,0,n){
        Long a=lower_bound(pos,pos+n,beacon[pos[i]])-pos;        
        if(a==0){
            ase[i]=1;
        }else{
            ase[i]=1+ase[a-1];
        }       
        if(resp>(n-ase[i]))resp=n-ase[i];
    }
    cout<<resp<<endl;
    return 0;
}
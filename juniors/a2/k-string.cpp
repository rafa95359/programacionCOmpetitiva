#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
typedef long long Long ;
Long le[27];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long n;
    string s;
    cin>>n>>s;
    para(i,0,s.size()){
        le[s[i]-'a']++;
    }
    bool isPosible=true;
    para(i,0,27){
        if(le[i]%n!=0)isPosible=false;
    }
    string resp;
    if(isPosible){
        para(i,0,27){
            while(le[i]!=0){
                resp.push_back(char('a'+i));
                le[i]-=n;
            }
        }
        para(i,0,n){
        cout<<resp;
    }
    }else{
        cout<<-1<<endl;
    }
    
    return 0;
}
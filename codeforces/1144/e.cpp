#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
typedef long long Long ;
Long alf=27;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long n;
    cin>>n;
    string s,t;
    cin>>s>>t;

    vector<Long> x,y;
    para(i,0,n){
         x.push_back('z'-s[i]);       
        y.push_back(t[i]-'a');
    }
    Long pos=0;
    para(i,0,n){
        if(s[i]!=t[i]){
            pos=i;
            break;
        }
    }
    vector <Long> aumento;
    Long dif=0;
    for(Long i=n-1;i>pos;i++){
        if(i==n-1){
            x[i]=='z'-s[i];
        }
        else{
            x[i]==('z'-x[i]-1)+x[i+1];
        }
    } 
    return 0;
}
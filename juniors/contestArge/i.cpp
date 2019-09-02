#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
Long arr[100006];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    Long r;
    cin>>r;
    
    para(i,0,r){
        Long a,b;
        cin>>a>>b;
        arr[a-1]++;
        arr[b]--;
    }
    para(i,0,s.size()+1){
        arr[i+1]+=arr[i];
    }
    /* *char letras[27];
    para(i,0,27){
        letras[i]='a'+i;
    }*/
    para(i,0,s.size()){
        cout<<arr[i]<<endl;
        Long aux=s[i]-'a';
        cout<<"aux"<<aux<<endl;
        s[i]='a'+(aux+arr[i])%26;
    }
    cout<<s<<endl;

    para(i,0,s.size()/2){
        if(s[i]!=s[s.size()-1-i]){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;

    return 0;
}
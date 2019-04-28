#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
int main(){
    string s;
    cin>>s;
    bool cambiar=true;
    for(int i=1;i<s.size();i++){
        if(s[i]<'A' || s[i]>'Z'){
            cambiar=false;
            break;
        }
    }
    if(cambiar){
        if(s[0]<='Z') s[0] = tolower(s[0]);
        else s[0] = toupper(s[0]);
        
        
        for(int i=1;i<s.size();i++){
            s[i]=tolower(s[i]);
        }
    }
    cout<<s<<endl;

    return 0;   
}

#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int palabra[26];
int main(){
    string s1,s2;
    cin>>s1>>s2;


    for(int i=0;i<s1.size();++i){
        palabra[s1.at(i)-'a']++;   
    }
    for(int i=0;i<s2.size();++i){       
        palabra[s2.at(i)-'a']--;       
    }
    
    
    int cant=0;

    for(int i=0;i<26;++i){
        cant+=abs(palabra[i]);
    }
    
    cout<<cant;


    return 0;
}

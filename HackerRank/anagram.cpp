#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    for(int k=0;k<n;k++){
        string c;
        cin>>c;
        if(c.size()%2!=0) cout<<-1<<endl;
        else{
            int cadena[26]={0};
            for( int i=0;i < c.size()/2; i++){
                cadena[c.at(i)-'a']++;
            }
            for( int i=c.size()/2;i<c.size();i++){
                if(cadena[c.at(i)-'a'] != 0) cadena[c.at(i)-'a']-- ;
            }
            int cant=0;
            for (int i=0;i<26 ;i++){
                cant+=cadena[i];
            }
            cout<<cant<<endl;
        }
    }
    return 0;
}

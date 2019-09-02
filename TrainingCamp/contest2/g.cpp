#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n = (int)s.size();
    int b = 0;
    string ans ="";
    for ( int i = 0 ; i < n;  ){
        if ( i<= n - 3 && s[ i ]=='W' && s[ i + 1 ]=='U'&&s[ i + 2 ]=='B'){
            i+= 3;
            if ( b == 1 ) {
                ans += ' ';
                b = 0;
            }
            continue;
        } 
        ans += s[ i ];
        i++;
        b = 1;
    }
    if ( ans[(int)ans.size()-1]==' ' ){
        ans.pop_back();
    }
    cout<<ans<<endl;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long Long;
int main(){

    string s;
    cin >> s;

    Long n = s.size();
    string resp = "";

    for(Long i = 0; i < n; i++){
        if(!(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y'
        || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'Y')){
            if('A' <= s[i] && s[i] <= 'Z'){
                resp += ".";
                resp += char(s[i]-'A'+'a');
            }else{
                resp += ".";
                resp += s[i];
            }
        }
    }
    cout << resp << endl;
    return 0;
}
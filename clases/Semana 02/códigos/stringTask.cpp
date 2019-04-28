#include<bits/stdc++.h>
using namespace std;
typedef long long Long;

bool esVocal(char c) {
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
        return true;
    }
    else{
        return false;
    }
}

int main(){
    string s;
    cin >> s;
    Long sz = s.size();
    for(Long i = 0; i < sz; i++) {
        s[i] = tolower(s[i]);
        if(!esVocal(s[i])) {
           cout << "." << s[i];     
        }
    }
    return 0;
}
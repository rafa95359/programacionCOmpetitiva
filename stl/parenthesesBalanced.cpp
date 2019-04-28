#include <bits/stdc++.h>
#define debug(x) cout << #x <<  " = " << x << endl;
#define pb push_back
using namespace std;

typedef long long Long;

Long tipo(char c) {
    if(c == '(' || c == ')') {
        return 0;
    }
    if(c == '[' || c == ']') {
        return 1;
    }
    return 2; 
}

bool apertura(char c) {
    return (c == '(' || c == '[' || c == '{');
}

bool balanced(string &s) { 
    stack<char> v;
    Long sz = s.size();
    for(Long i = 0; i < s.size(); i++) {
        char c = s[i];
        if(apertura(c)) {
            v.push(c);
        }
        else {
            if(v.empty()) {
                return false;
            }
            char x = v.top();
            if(tipo(x) == tipo(c)) {
                v.pop();
            } else{
                return false;
            }
        }
    }

    if(v.empty()) {
        return true;
    } else {
        return false;
    }
}

void testcase() {
    string s;
    getline(cin,s);
    if(s.size()==0 || (balanced(s))) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    Long T;
    cin >> T;
    cin.ignore();
    
    for(Long i = 0; i < T; i++) {
        testcase();
    }
    return 0;
}
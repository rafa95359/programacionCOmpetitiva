#include <bits/stdc++.h>

using namespace std;

typedef long long Long;

bool esVocal(char c) {
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ) {
        return true;
    }
    return false;
}

int main() {
    string s;
    cin >> s;
    Long n = s.size();
    bool ok = true;

    for(Long i = 0; i < n - 1 ; i++) {
        if(!esVocal(s[i]) && s[i] != 'n') {
            if(!esVocal(s[i + 1])) {
                ok = false;
            }
        }
    }
    //debemos considerar el caso en que la ultima letra sea consonante
    if(!esVocal(s[n - 1]) && s[n - 1] != 'n') {
        ok = false;
    }
    if(ok) {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

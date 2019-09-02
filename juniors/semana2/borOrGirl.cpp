#include<bits/stdc++.h>
using namespace std;
typedef long long Long;

bool aparecio[26];

int main(){
    string s;
    cin >> s;
    Long sz = s.size();
    Long cnt = 0;
    for(Long i = 0; i < sz ; i++) {
        Long ind = s[i] - 'a';
        if(!aparecio[ind]) {
            cout<<s[i]<<endl;
            cnt++;
            aparecio[ind] = true;
        }
    }


    if(cnt % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else{
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}
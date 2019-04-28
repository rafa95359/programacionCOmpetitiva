#include <bits/stdc++.h>
using namespace std;
typedef long long Long;

//Tiempo : O(n)
//Memoria : O(n)
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    Long n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    
    Long resp = 0;
    for(Long letra = 0; letra < 26; letra++) {
        Long i = 0;
        Long level = 0;
        while(i < n) {
            if((s[i] - 'a') != letra) {
                i++;
            } else {
                Long cnt = 0;
                while(i < n && (s[i] - 'a') == letra) {
                    cnt++;
                    i++;
                }
                level += cnt / k;
            }
        }
        resp = max(level , resp);
    }
    cout << resp << endl;
    return 0;
}
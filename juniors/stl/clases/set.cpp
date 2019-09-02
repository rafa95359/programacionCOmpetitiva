#include <bits/stdc++.h>
#define debug(x) cout << #x <<  " = " << x << endl;
#define pb push_back
using namespace std;

typedef long long Long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    set<Long> s;

    Long n;
    cin >> n;

    for(Long i = 0; i < n; i++) {
        Long num;
        cin >> num;
        s.insert(num); 
    }

    //Recorrido1
    cout << "Recorrido 1 = ";
    for(set<Long>::iterator it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    //Recorrido2
    cout << "Recorrido 2 = ";
    for(auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    //Recorrido3
    cout << "Recorrido 3 = ";
    for(Long x : s) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}
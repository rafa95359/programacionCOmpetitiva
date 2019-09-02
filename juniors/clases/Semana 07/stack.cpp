#include <bits/stdc++.h>
#define debug(x) cout << #x <<  " = " << x << endl;
#define REP(i,n) for(Long i = 0; i < (Long)n; i++)
#define pb push_back
using namespace std;

typedef long long Long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    //LIFO : Last in First Out
    vector<Long> v;
    Long n;
    cin >> n;

    for(Long i = 0; i < n; i++) {
        Long num;
        cin >> num;
        v.push_back(num);
    }
    
    while(!v.empty()) { //mientras no este vacio
        cout << v.back() << " "; //escribimos el ultimo elemento
        v.pop_back(); //eliminamos el ultimo elemento
    }

    return 0;
}
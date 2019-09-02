#include <bits/stdc++.h>
using namespace std;
typedef long long Long;

//Tiempo : O(log n)
//Memoria : O(1)

Long cantCifras(Long n) { //O(log n)
    Long cifras = 0;
    while(n > 0) {
        cifras++;
        n /= 10;
    }
    return cifras;
}

Long primerDigito(Long n) { //O(log n)
    while(n >= 10) {
        n /= 10;
    }
    return n;
}

Long pot(Long b , Long exp) { //O(exp)
    Long resp = 1; 
    for(Long i = 0; i < exp; i++) {
        resp *= b;
    }
    return resp;
}

Long siguienteLucky(Long n) { //O(log n)
    Long x = primerDigito(n) + 1;
    x *= pot(10 , cantCifras(n) - 1);

    return x;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    Long n;
    cin >> n;

    cout << siguienteLucky(n) - n << endl;
 
    return 0;
}
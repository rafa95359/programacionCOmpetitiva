#include <bits/stdc++.h>
using namespace std;
typedef long long Long;

//Tiempo : O(n)
//Memoria : O(1)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    Long n;
    cin >> n;
    
    Long anterior = 0;
    Long resp = 0;
    for(Long i = 0; i < n; i++) {
        Long num;
        cin >> num;
        resp += abs(num - anterior);
        anterior = num;
    }
   
    cout << resp << endl;
    return 0;
}
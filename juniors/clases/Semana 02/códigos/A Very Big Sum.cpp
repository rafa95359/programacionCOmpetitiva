#include<bits/stdc++.h>
using namespace std;

typedef long long Long;

int main(){
    Long n, x;
    cin >> n;
    Long sum = 0;
    for(Long i = 0; i < n; i++){
        cin >> x;
        //sum = sum + x;
        sum += x;
    }
    cout << sum << endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

typedef long long Long;

int main(){
    Long x = 100;
    int a = x;
    int b = int(x);
    cout << a << " " << b << endl;
    for(Long i = 97; i <= 122; i++){
        cout << "Ascii : " << i << " " << char(i) << endl;
    }
    for(Long i = 65; i <= 95; i++){
        cout << "Ascii : " << i << " " << char(i) << endl;
    }
    return 0;
}
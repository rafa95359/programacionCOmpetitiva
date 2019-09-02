#include<bits/stdc++.h>
using namespace std;
typedef long long Long;

Long arreglo[100];

int main(){
    Long n;
    cin >> n;
    Long sumx = 0, sumy = 0, sumz = 0;
    for(Long i = 0; i < n; i++) {
        Long x , y , z;
        cin >> x >> y >> z;
        sumx += x;
        sumy += y;
        sumz += z;
    }
    if(sumx == 0 && sumy == 0 && sumz == 0) {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
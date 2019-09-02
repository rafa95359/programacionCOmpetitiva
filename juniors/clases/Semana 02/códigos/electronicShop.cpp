#include<bits/stdc++.h>
using namespace std;
typedef long long Long;

Long teclado[2000];
Long usb[2000];

int main(){
    Long b, n ,m;
    cin >> b >> n >> m;
    for(Long i = 0; i < n; i++) {
        cin >> teclado[i];
    }
    for(Long i = 0; i < m; i++) {
        cin >> usb[i];
    }

    Long maxSum = -1;

    for(Long i = 0; i < n; i++) {
        for(Long j = 0; j < m; j++) {
            Long x = teclado[i] + usb[j];
            if( x <= b) {
                maxSum = max(maxSum , x);
            }
        }
    }
    cout << maxSum << endl;
    return 0;
}
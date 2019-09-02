#include<bits/stdc++.h>
using namespace std;
typedef long long Long;

int main(){
    Long T;
    cin >> T;
    for(Long i = 1; i <= T; i++) {
        Long C , d;
        cin >> C >> d;

        double incCelsisus = 5.0 / 9 * d;

        double resp = C + incCelsisus;
        cout << "Case " << i << ": ";
        cout << fixed << setprecision(2) << resp << endl;
    }
    return 0;
}
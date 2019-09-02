#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;

int main() {
    int n; 
    cin >> n;
    int A[n+1]; 
   para(i,1,n+1) cin >> A[i];
    map<int, int> even, odd;
    even[0] = 1;
    Long ans = 0;
    int cur = 0;
    para(i,1, n+1) {
        cur = cur ^ A[i];
        if (i % 2 == 0) {
            ans += even[cur];
            even[cur]++;
        } else {
            ans += odd[cur];
            odd[cur]++;
        }
    }
    cout << ans << endl;

    
    return 0;
}
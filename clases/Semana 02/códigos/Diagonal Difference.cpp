#include<bits/stdc++.h>
using namespace std;
typedef long long Long;

int main(){
    Long n, x;
    cin >> n;
    Long sum1 = 0;
    Long sum2 = 0;
    for(Long i = 0; i < n; i++){
        for(Long j = 0; j < n; j++){
            cin >> x;
            if(i == j){
                sum1 += x;
            }
            if(i + j == n-1){
                sum2 += x;
            }
        }
    }
    Long resp = abs(sum1 - sum2);
    cout << resp << endl;
    return 0;
}
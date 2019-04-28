#include<bits/stdc++.h>
using namespace std;
typedef long long Long;

Long score[1010];

int main(){
    Long n;
    cin >> n;
    for(Long i = 0; i < n; i++){
        cin >> score[i];
    }

    Long mn = score[0];
    Long mx = score[0];
    Long cnt_mx = 0;
    Long cnt_mn = 0;
    for(Long i = 1; i < n; i++){
        if(mn > score[i]){
            mn = score[i];
            cnt_mn++;
        }
        if(mx < score[i]){
            mx = score[i];
            cnt_mx++;
        }
    }
    cout << cnt_mx << " " << cnt_mn << endl;
    return 0;
}
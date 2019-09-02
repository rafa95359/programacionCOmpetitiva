#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
typedef long long Long ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector <Long > num;
    para(i,0,4){
        Long x;
        cin>>x;
        num.push_back(x);
    }
    sort(num.begin(),num.end());
    cout<<num[3]-num[2]<<" "<<(num[1]-(num[3]-num[2]))<<" "<<num[0]-(num[3]-num[2])<<endl;
    
    return 0;
}
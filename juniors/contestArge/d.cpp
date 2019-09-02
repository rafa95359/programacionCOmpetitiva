#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;

Long cerca[5005];
map<Long,vector <Long> > values;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long n;
    cin>>n;
    for(Long i=0;i<n;i++){
        cin>>cerca[i];
        values[ cerca[ i ] ].push_back(i);
    }
    for(auto it = value.begin();it<value.end();it++){
        
    }
    return 0;
}
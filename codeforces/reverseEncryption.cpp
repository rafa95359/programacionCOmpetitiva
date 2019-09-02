#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
string x;
Long n;
vector <Long> r;
void revertir(Long r){
    para(i,0,r/2){
        swap(x[i],x[r-i-1]);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    cin>>x;
    para(i,1,n+1){
        if(n%i==0)r.push_back(i);
    }
    para(i,0,r.size()){
        Long t=r[i];
        revertir(t);
    }
    cout<<x<<endl;
    return 0;
}
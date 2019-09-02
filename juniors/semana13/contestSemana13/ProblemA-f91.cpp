#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
typedef long long Long ;
Long f91(Long a){
    if(a>=101) return a-10;
    return f91(f91(a+11));    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    Long n;
    cin>>n;
    while(n){
        
        cout<<"f91("<<n<<") = "<<f91(n)<<endl;
        cin>>n;
    }   
    return 0;
}
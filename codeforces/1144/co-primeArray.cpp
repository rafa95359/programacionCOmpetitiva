#include <bits/stdc++.h>
using namespace std;
#define para(i,a,n) for(int i=a;i<n;i++)
#define N 1000000
typedef long long Long ;
bool isCoprime(Long a,Long b){
    if(__gcd(a,b)==1)return true;
    else return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Long n;
    cin>>n;
    vector<Long> x;
    para(i,0,n){
        Long aux;
        cin>>aux;
        x.push_back(aux);
    }
    vector <Long> resp;
    resp.push_back(x[0]);

    para(i,0,n-1){
        if(!isCoprime(x[i],x[i+1])){            
            resp.push_back(1);
        }     
        resp.push_back(x[i+1]);
    }
    cout<<resp.size()-n<<endl;
    para(i,0,resp.size())cout<<resp[i]<<" ";
    return 0;
}
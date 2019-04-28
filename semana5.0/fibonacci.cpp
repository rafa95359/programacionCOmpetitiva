#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
int main(){
    Long n;
    cin>>n;
    para(i,n){
        Long x,sum=0;
        cin>>x;
        Long a=1,b=2;
        while (b <= x) {      
            if (b % 2 == 0)sum += b;      
            Long aux = a + b;
            a = b;
            b = aux;
        }
        cout << sum<<endl;

    }

    return 0;
}

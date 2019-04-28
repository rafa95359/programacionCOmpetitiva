#include <bits/stdc++.h>
using namespace std;

int gcd (int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}

int gcd2 (int a, int b) {
    return b ? gcd2 (b, a % b) : a;
}
int gcd3 (int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
int main(){
    int a,b;
    cin>>a,b;   
    
    cout<<gcd(a,b)<<endl;
    cout<<gcd2(a,b)<<endl;
    cout<<gcd3(a,b)<<endl;


    return 0;
}
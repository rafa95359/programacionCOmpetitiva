
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<char> is_prime(n+1, true);//se crea el tamaño del vector y todos true o false
 
 
    is_prime[0] = is_prime[1] = false;
    

    for (int i = 2; i <= n; i++) {
        if (is_prime[i] && (long long)i * i <= n) {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }      
    

}
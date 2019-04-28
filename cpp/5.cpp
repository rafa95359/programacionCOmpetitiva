#include <bits/stdc++.h>
using namespace std;

int sumaEnOtraBase (int a,int b){
    int suma = 0;
    while ( a > 0 ) {
        suma += a % b;
        a = a/b;
    }    
    return suma;
};

int main () {
    int n,numerador=0;
    cin>>n;
    for (int i=2; i<n; ++i) {
        numerador += sumaEnOtraBase(n,i);
    }
    int denominador=n-2;
    for ( int i=2 ; i < denominador/2; ++i){
        if ( numerador % i == 0 && denominador % i == 0){
            numerador = numerador / i;
            denominador = denominador / i;
            i=i-1;
        }
    }

    cout<<numerador<<"/"<<denominador<<endl;
    return 0;
}
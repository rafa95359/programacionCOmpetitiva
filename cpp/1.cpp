#include <bits/stdc++.h>
using namespace std;


int main(){
    int a,b,c;
    cin>>a>>b>>c;    
    int suma=0;
    if (a+b+c>suma)suma=a+b+c;
    if (a*b+c>suma)suma=a*b+c;
    if (a+b*c>suma)suma=a+b*c;
    if (a*b*c>suma)suma=a*b*c;
    if (a*(b+c)>suma)suma=a*(b+c);
    if ((a+b)*c>suma)suma=(a+b)*c;
    cout<<suma;

}
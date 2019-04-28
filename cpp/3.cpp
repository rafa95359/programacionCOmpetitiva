#include <bits/stdc++.h>
using namespace std;

int main () {
   int n;
   cin >> n;
   
   for (int i = 0 ; i < n/4 ; i++) {
       cout<<char(97)<<char(98)<<char(99)<<char(100);
   }
   if (n % 4 ==1 ) cout<<char(97);
   if (n % 4 ==2 ) cout<<char(97)<<char(98);
   if (n % 4 ==3 ) cout<<char(97)<<char(98)<<char(99);
   



}
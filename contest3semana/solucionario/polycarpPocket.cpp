#include <bits/stdc++.h>

using namespace std;

typedef long long Long;

Long cont[101]; //arreglo de frecuencia

int main() {
	//El problema se reduce a hallar la mayor frecuencia
  Long n;
  cin >> n;
  
  for(Long i = 0; i < n; i++) {
    Long num;
    cin >> num;
    cont[num]++;
  }
 
  Long maxi = 0; //mayor frecuencia
  for(Long i = 1; i <= 100; i++) {
    maxi = max(maxi , cont[i]);
  }
  cout << maxi << endl;

}

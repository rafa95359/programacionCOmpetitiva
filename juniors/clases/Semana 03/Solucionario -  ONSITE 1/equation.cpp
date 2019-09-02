#include <bits/stdc++.h>

using namespace std;

typedef long long Long;

int main() {
    Long A , B , C ; //Tener cuidado con el overflow al hallar la discriminante, por ello mejor trabajar con long long
    cin >> A >> B >> C;
	
	//debemos tomar en cuenta varios casos esquinas (especialmente con el valor 0)
	
    if(A == 0) {
        if(B == 0) {
            if(C == 0){
                cout << -1 << endl;
            } else{
                cout << 0 << endl;
            }
        }
        else{
            double x = - 1.0 * C/B;
            cout << 1 << endl;
            cout << fixed << setprecision(5) << x << endl;
        }
    } else{
        Long disc = B * B - 4 * A * C;
        if(disc < 0) {
            cout << 0 << endl;
        } else{
            if(disc == 0) {
                cout << 1 << endl;
                double x = -1.0 * B / (2 * A);
                cout << fixed << setprecision(5) << x << endl;
            } else{
                cout << 2 << endl;
                double x1 = (-B + sqrt(disc)) / (2.0 * A);
                double x2 = (-B - sqrt(disc)) / (2.0 * A);
                // Importante : NO asumir que (-B + sqrt(disc)) / (2.0 * A) sea la mayor solucion , ya que esto no se cumple si A < 0
                
                if(x1 > x2) {
                    swap(x1 , x2); //con esto nos aseguramos que el menor sea x1
                }
                cout << fixed << setprecision(5) << x1 << endl << x2 << endl;
            }
        }
    }
	return 0;
}


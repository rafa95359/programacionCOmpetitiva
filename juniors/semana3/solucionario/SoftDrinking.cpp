#include <bits/stdc++.h>
using namespace std;
typedef long long Long;

const Long N=101;

int main(){
	Long n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	// todos con division entera, porq no puede haber una fraccion de brindis
	Long litros_brindis = (k*l) / (n*nl);
	Long rodajas_brindis = (c*d) / n;
	Long sal_brindis = p / (np*n);
	cout << min({litros_brindis,rodajas_brindis,sal_brindis}) << endl;
	return 0;
}

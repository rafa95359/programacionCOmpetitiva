#include <bits/stdc++.h>

#define debug(x) cout << #x << " => " << x << endl;

#define debugArray(x, n)                 \
	for (ll i = 0; i < n; i++)           \
		cout << #x << "[" << i << "]"    \
								  " => " \
			 << x[i] << endl;

using namespace std;

typedef long long ll;

int main()
{
	/*Escribir codigo aqui*/
	ll q;
	cin >> q;
	for (ll i = 0; i < q; i++)
	{
		ll n;
		cin >> n;
		ll cont = 0;
		while (n % 3 == 0)
		{
			cont++;
			n = (2 * n) / 3;
		}
		while (n % 5 == 0)
		{
			cont++;
			n = (4 * n) / 5;
		}
		while (n % 2 == 0)
		{
			cont++;
			n = n / 2;
		}
		if (n == 1)
			cout << cont << endl;
		else
			cout << -1 << endl;
	}
	return 0;
}
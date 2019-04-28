#include <bits/stdc++.h>

#define debug(x) cout << #x << " => " << x << endl;

#define debugArray(x, n)             \
	for (ll i = 0; i < n; i++)         \
		cout << #x << "[" << i << "]"    \
															" => " \
				 << x[i] << endl;

using namespace std;

typedef long long ll;

int main()
{
	/*Escribir codigo aqui*/

	ll n, m;
	cin >> n >> m;
	map<ll, vector<ll>> aux;
	for (ll i = 0; i < n; i++)
	{
		ll ass;
		cin >> ass;
		aux[ ass % m ].push_back(ass);
	}
	ll ssae;
	cin>>ssae;
	cin>>ssae;
	cout << n << " " << m << endl;
	for (auto it = aux.begin(); it != aux.end(); it++)
	{
		vector<ll> ss = it->second;
		vector<ll> odd;
		vector<ll> sssda;
		for (ll i = 0; i < ss.size(); i++)
		{
			if ( ss[i] % 2 == 0)
			{
				sssda.push_back(ss[i]);
			}
			else
			{
				odd.push_back(ss[i]);
			}
		}
		sort(sssda.begin(), sssda.end());
		sort(odd.begin(), odd.end());
		for (ll k = odd.size() - 1; k >= 0; k--)
		{
			cout << odd[k] << endl;
		}
		for (ll k = 0; k < sssda.size(); k++)
		{
			cout << sssda[k] << endl;
		}
	}
	cout<<"0 0"<<endl;

	return 0;
}
#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll xpow(ll x, ll n)
{
	ll res = 1;
	while (n)
	{
		if (n & 1)
			res = res * x % 10;
		n = n / 2;
		x = x * x % 10;
	}
	return res;
}

int main() {

#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("D:/daydash/input.txt", "r", stdin);
	// for getting input from output.txt
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	int t;
	cin >> t;

	while (t--) {

		ll n, m;
		cin >> n >> m;

		// n = pow(n, m);
		// n %= 10;

		ll final = 0;
		while (n > 0) {
			ll digit = xpow(n % 10, m);
			final = (final * 10) + digit ;//(digit % 10);
			n /= 10;
		}
		// cout << final;

		// int rev = 0;
		// while (final != 0) {
		// 	rev = (rev * 10) + (final % 10);
		// 	final /= 10;
		// }
		// cout << rev;

		if (final % 7 == 0) cout << "YES";
		else cout << "NO";

		cout << endl;
	}
}
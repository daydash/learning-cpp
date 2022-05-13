#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll t = 1;

int ans()
{
	ll a, b, c;
	int num;

	cin >> a >> b >> c;

	ll x = __gcd(b, c);

	if (x == c)
	{
		cout << -1 << endl;
		return 0;
	}
	else
	{
		num = (a / b) + 1;
		if ((num * b) % c == 0) num++;
	}
	cout << num*b << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> t;

	while (t--)
	{
		ans();
	}

	return 0;
}
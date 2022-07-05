#include<iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("inputcc.txt", "r", stdin);
	freopen("outputcc.txt", "w", stdout);
#endif

	int t, x, m, d ;
	cin >> t;

	while (t--) {
		int ans = 0;
		cin >> x >> m >> d;

		if ((m * x) <= (x + d)) {
			ans = m * x;
		}
		else
			ans = x + d;
		cout << ans << endl;
	}
	return 0;
}
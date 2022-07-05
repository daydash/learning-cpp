#include<iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("inputcc.txt", "r", stdin);
	freopen("outputcc.txt", "w", stdout);
#endif

	int t, n, k, f, i, j;
	cin >> t;

	while (t--) {
		cin >> n >> k >> f;
		int s[n], e[n];
		int f[n] = {0};
		for (i = 0; i < n; i++) {
			cin >> s[i] >> e[i];
		}
		for (i = s)
			cout << endl;
	}
	return 0;
}
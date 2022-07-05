#include<iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("inputcc.txt", "r", stdin);
	freopen("outputcc.txt", "w", stdout);
#endif

	int t, n, m, k, i, j;
	cin >> t;

	while (t--) {
		cin >> n >> m >> k;
		int a[k];
		int f[n + 1] = {0};
		int count = 0;
		for (i = 0; i < k; i++) {
			cin >> a[i];
		}
		if (n == k) {
			cout << 0 << endl;
			continue;
		}
		for (j = 1; j <= n + 1; j++) {
			for (i = 0; i < k; i++) {
				if (a[i] == j) {
					f[j]++;
				}
			}
			if (f[j - 1] >= 2) {
				count++;
			}
		}
		cout << count << ' ' ;
		for (i = 1; i < n + 1; i++) {
			if (f[i] >= 2) {
				cout << i << ' ';
			}
		}
		cout << endl;
	}
	return 0;
}
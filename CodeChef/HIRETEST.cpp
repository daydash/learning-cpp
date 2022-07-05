#include<iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("inputcc.txt", "r", stdin);
	freopen("outputcc.txt", "w", stdout);
#endif

	int t, n, m, x, y, i, j, full = 0, partial = 0;;
	cin >> t;

	while (t--) {
		cin >> n >> m;
		cin >> x >> y;
		for (i = 1; i <= n; i++) {
			full = 0, partial = 0;
			for (j = 1; j <= m; j++) {
				char c;
				cin >> c;
				if (c == 'F') {
					full++;
				}
				else if (c == 'P') {
					partial++;
				}
			}
			if ((full >= x) || ((full == x - 1) && (partial >= y))) {
				cout << 1;
			}
			else
				cout << 0;
		}
		cout << endl;
	}
	return 0;
}
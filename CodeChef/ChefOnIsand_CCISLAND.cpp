#include<iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("inputcc.txt", "r", stdin);
	freopen("outputcc.txt", "w", stdout);
#endif

	int x, y, xr, yr, D, T, ans;
	int xs, ys;
	cin >> T;
	if (T > 0 && T < 301) {

		for (int i = 1; i <= T; i++) {
			cin >> x >> y >> xr >> yr >> D;
			if ( x > 0 && x < 101 && y > 0 && y < 101 && xr > 0 && xr < 11 && yr > 0 && yr < 11 && D > 0 && D < 11) {
				xs = x / xr;
				ys = y / yr;
				ans = min(xs, ys);
				if (ans >= D) {
					cout << "YES" << endl;
				}
				else
					cout << "NO" << endl;

			}
		}
	}
	return 0;
}
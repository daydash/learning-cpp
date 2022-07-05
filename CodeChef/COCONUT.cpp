#include<iostream>
#include <cmath>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("inputcc.txt", "r", stdin);
	freopen("outputcc.txt", "w", stdout);
#endif

	int p, q, d, D, T;
	cin >> T;
	if (T > 0 && T <= pow(10, 5) ) {
		for (int i = 1; i <= T; i++) {
			cin  >> D >> d >> p >> q;
			if ( p > 0 && p <= pow(10, 6) && q > 0 && q <= pow(10, 6) && d > 0 && d <= pow(10, 6) && D > 0 && D <= pow(10, 6) && D <= 100 && d <= D) {
				int sum = 0;
				// for(int i=1; i<=D;i++){

				// }

				cout << ps + qs << endl;
			}
		}
	}
	return 0;
}
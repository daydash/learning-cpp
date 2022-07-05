#include<iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("inputcc.txt", "r", stdin);
	freopen("outputcc.txt", "w", stdout);
#endif

	int t, a;
	cin >> t;
	if (t >= 1 && t <= 1000) {

		while (t--) {
			int ind = 0, eng = 0;

			for (int i = 0; i < 5; i++) {
				cin >> a;

				if (a == 1) {
					ind++;
				}
				else if (a == 2) {
					eng++;
				}
			}
			if (ind > eng) {
				cout << "INDIA";
			}
			else if (eng > ind) {
				cout << "ENGLAND";
			}
			else {
				cout << "DRAW";
			}
			cout << endl;
		}
	}
}
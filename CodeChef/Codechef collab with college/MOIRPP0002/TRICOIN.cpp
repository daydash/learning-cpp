#include<bits/stdc++.h>
using namespace std;

int main() {


#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for getting input from output.txt
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;

	while (t--) {

		int n;
		cin >> n;

		int cnt = 0;

		for (int i = 1; i <= n ; i++) {

			if (n >= i ) {
				n -= i;
				cnt++;
			}
		}

		cout << cnt << endl;

	}

}
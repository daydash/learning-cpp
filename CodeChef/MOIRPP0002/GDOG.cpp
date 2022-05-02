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

		int n, k;
		cin >> n >> k;

		int res = 0;

		for (int i = 1; i <= k; i++) {
			if ((n % i) > res) res = n % i;
		}

		cout << res << endl;

	}

}
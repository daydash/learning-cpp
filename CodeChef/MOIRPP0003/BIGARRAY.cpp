#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {

#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("D:/daydash/input.txt", "r", stdin);
	// for getting input from output.txt
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	int t;
	cin >> t;

	while (t--) {

		// Approach 1

		// int n, s;
		// cin >> n >> s;
		// bool ans = false;

		// // Sum of AP is: S = n/2[2a + (n − 1) × d]
		// // Since a = 1, d = 1
		// // S = n/2[2(1) + (n − 1) × (1)]
		// // S = n/2[2 + (n − 1)]
		// // S = n/2[n + 1]

		// float sum = (n / 2.0) * (n + 1);

		// if (sum > s) {

		// 	int i;
		// 	for (i = n; i >= 1; --i) {
		// 		if ((sum - i) == s) {
		// 			ans = true;
		// 			break;
		// 		}
		// 	}

		// 	if (ans) cout << i;
		// 	else cout << -1;
		// }
		// else cout << -1;

		// Approach 2

		ll n, s;
		cin >> n >> s;

		ll i = (n * (n + 1) / 2) - s;
		if (i >= 1 and i <= n) cout << i;
		else cout << -1;


		cout << '\n';

	}
}


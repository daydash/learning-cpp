#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int n ) {
	if (n == 0) return 0;
	// if (n <= 9) return n; // to minimise one recursion call
	return n % 10 + sumOfDigits(n / 10);
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	int t;
	cin >> t;

	while (t--) {

		int n;
		cin >> n;

		cout << sumOfDigits(n) << endl;
	}
}
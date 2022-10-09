#include<bits/stdc++.h>
using namespace std;

int countZeros(int n) {
	if (n == 0) return 0;
	if (n % 10 == 0) return 1 + countZeros(n / 10);
	return countZeros(n / 10);
}

int countZeros2(int n) {
	if (n <= 9) {
		if (n == 0) {
			return 1;
		}
		else {
			return 0;
		}
	}
	int last = n % 10;
	int count = 0;
	if (last == 0) {
		count = 1;
	}
	return count + countZeros2(n / 10);
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

		cout << countZeros(n) << endl;
		// cout << countZeros2(n) << endl;
	}
}
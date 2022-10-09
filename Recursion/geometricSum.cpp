#include<iostream>
#include<cmath>
using namespace std;

double geometricSum(int n ) {
	if (n == 0) return 1;
	return (1 / pow(2, n)) + geometricSum(n - 1);
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

		cout << geometricSum(n) << endl;
	}
}

// Series
// 1 + 1/2 + 1/4 + 1/8 + ... + 1/2^n

// INPUT
// 3
// 3 4 5

// OUTPUT
// 1.875
// 1.9375
// 1.96875
#include<iostream>
using namespace std;

int power(int x, int n) {
	if (n == 0) return 1;
	// if (n == 1) return x;
	return x * power(x, n - 1);
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t--) {
		int x, n;
		cin >> x >> n;

		int res = power(x, n);
		cout << res << endl;
	}
}

/*
// INPUT
5
3 4
2 5
0 1
4 0
0 0

// OUTPUT
81
32
0
1
1
*/
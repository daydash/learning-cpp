#include<iostream>
using namespace std;

int countDigits(int cnt, int n) {
	if (n % 10 == 0 && n == 0) return cnt;
	return countDigits(++cnt, n / 10);
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

		int res = countDigits(0, n);
		cout << res << endl;
	}
}

/*
// INPUT
4
156
600
656
3406

// OUTPUT
3
3
3
4

*/
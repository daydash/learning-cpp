#include <iostream>
using namespace std;

int fib(int n) {
	if (n == 0) {
		return 0;
	}

	if (n == 1) {
		return 1;
	}

	int smallOutput1 = fib(n - 1);
	int smallOutput2 = fib(n - 2);
	return smallOutput1 + smallOutput2;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	cout << fib(n) << endl;
}

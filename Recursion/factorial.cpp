#include <iostream>
using namespace std;

int factorial_functional(int n) {
	// cout << n << endl;
	if (n == 0) {
		return 1;
	}
	int smallOutput = factorial_functional(n - 1);
	return n * smallOutput;
}

void fact_parameterised(int n, int ans) {
	if (n == 0) {
		cout << ans;
		return;
	}

	return fact_parameterised(n - 1, ans * n);

}

int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	// int output = factorial_functional(n);
	// cout << output << endl;
	fact_parameterised(n, 1);

	return 0;
}

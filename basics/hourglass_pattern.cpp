#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for getting input from output.txt
	freopen("output.txt", "w", stdout);
#endif
	// start the code here

	int n;
	cin >> n;

	int i, j, spaces;

	for (i = 1; i <= n; i++) {
		for (spaces = 1; spaces < i; spaces++) {
			cout << " ";
		}
		for (j = i; j <= n; j++) {
			cout << "* ";
		}
		cout << endl;
	}

	for (i = n - 1; i >= 1; i--) {
		for (spaces = 1; spaces < i; spaces++) {
			cout << " ";
		}
		for (j = i; j <= n; j++) {
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}
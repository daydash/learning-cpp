#include<bits/stdc++.h>
using namespace std;

void parameterised(int i, int sum) {
	if (i < 1) {
		cout << sum;
		return;
	}
	parameterised(i - 1, sum + i);
}

int functional(int n) {
	if (n == 1) return 1;

	return n + functional(n - 1);
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	// parameterised(n, 0);
	cout << functional(n);
}
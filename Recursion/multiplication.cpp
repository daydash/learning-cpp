#include<bits/stdc++.h>
using namespace std;

int multiplication(int m, int n) {
	if (n == 1) return m;
	return m + multiplication(m, n - 1);
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	int m, n;
	cin >> m >> n;

	cout << multiplication(m, n);
}
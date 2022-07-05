#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for getting input from output.txt
	freopen("output.txt", "w", stdout);
#endif

	int p, q, r;
	p = 3;
	q = 7;
	r = 5;

	p = (r + 9)&r;
	r = (p + r)&q;
	if ((p - q) < (r + p) && p < q) {
		p = (r ^ 8)&r;
		r = (p + p) + q;
	}
	else {
		p = (1 ^ 2)&r;
	}
	cout << p + q + r;

	return 0;
}
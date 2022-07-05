#include<bits/stdc++.h>
using namespace std;

long int gcd(long int a, long int b) {
	if (a == 0)
		return b;
	else
		return gcd(b % a, a);
}

int main() {


#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for getting input from output.txt
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;

	while (t--) {

		long long a, b;
		cin >> a >> b;

		long long res = gcd(a, b);
		cout << res << ' ' << (a * b) / res << endl;

	}

	return 0;
}
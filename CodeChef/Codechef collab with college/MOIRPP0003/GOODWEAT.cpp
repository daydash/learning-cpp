#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("D:/daydash/input.txt", "r", stdin);
	// for getting input from output.txt
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	int t;
	cin >> t;

	while (t--) {

		int cnt = 0;

		for (int i = 0; i < 7; i++) {
			int n;
			cin >> n;
			(n == 1) ? ++cnt : --cnt;
		}

		(cnt > 0) ? cout << "YES" : cout << "NO";

		cout << endl;
	}
}
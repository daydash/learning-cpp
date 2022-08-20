#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	int n, k;
	cin >> n >> k;
	int p[n], v[n];

	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	int max = v[0];
	int res = 0;

	for (int i = 1 ; i < n; i++) {
		if (max < v[i]) {
			max = v[i];
		}
	}

	for (int i = 0; i < n; i++) {
		if (max == v[i] && p[i] <= k) {
			k = k - p[i];
			res = max;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n + 1; j++) {
			if (p[i] <= k && p[i] == p[j]) {
				if (v[i] > v[j]) {
					res = res + v[i];
					k = k - p[i];
				}
				else {
					res = res + v[j];
					k = k - p[j];
				}
			}
			else if (p[i] <= k && p[i] != p[j]) {
				k = k - p[i];
				res = res + v[i];
			}
		}
	}
	cout << res;
}
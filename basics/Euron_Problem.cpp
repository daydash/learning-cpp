#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	vector<int> v;
	int n, count = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}

	cout << "\nVector elements are: ";
	for (auto it = v.begin(); it != v.end(); it++)
		cout << *it << " ";

	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (v.at(i) < v.at(j)) {
				count++;
			}
		}
	}

	cout << count;
}
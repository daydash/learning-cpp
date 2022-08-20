#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("D:/daydash/input.txt", "r", stdin);
	// for getting input from output.txt
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	vector<int> f;
	for (int i = 0; i < n; i++) {
		int in;
		cin >> in;
		f.push_back(in);
	}
	int count = 0, c = 0;
	for (int i = 0; i < n - 1; i++) {
		if (f.at(i) != f.at(i + 1)) {
			c = 1;
			count++;
		}
	}
	cout << (count + c);
}
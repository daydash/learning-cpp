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

	string dir[4] = {"North", "East", "South", "West"};

	while (t--) {

		int n;
		cin >> n;

		cout << dir[n % 4];
		cout << endl;
	}
}
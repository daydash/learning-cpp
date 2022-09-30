#include<bits/stdc++.h>
using namespace std;

void printLinearly(int i, int n) {
	if (n == 0) return;
	cout << i << ' ';
	printLinearly(i + 1, n - 1);
}

void printLinearly2(int i, int n) {
	if (i > n) return;
	cout << i << ' ';
	printLinearly(i + 1, n );
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	// printLinearly(1, n);
	printLinearly2(1, n - 1void printLinearly(int i, int n) {
		if (n == 0) return;
		cout << i << ' ';
		printLinearly(i + 1, n - 1);
	});
}
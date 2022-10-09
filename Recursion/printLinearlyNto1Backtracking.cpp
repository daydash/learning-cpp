#include<bits/stdc++.h>
using namespace std;

void printLinearlyNto1Backtracking(int i, int n) {
	if (i > n) return;

	printLinearlyNto1Backtracking(i + 1, n);
	cout << i << ' ';
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	printLinearlyNto1Backtracking(1, n);
}
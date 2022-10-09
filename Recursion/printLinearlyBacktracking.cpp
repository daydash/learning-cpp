#include<bits/stdc++.h>
using namespace std;

void printLinearlyBacktracking(int i, int n) {
	if (i < 1) return;

	printLinearlyBacktracking(i - 1, n);
	cout << i << ' ';
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	printLinearlyBacktracking(n, n);
}
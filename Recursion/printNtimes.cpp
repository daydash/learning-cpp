#include<bits/stdc++.h>
using namespace std;

void printNtimes(int n) {
	if (n == 0) return;
	cout << "yash.gg" << endl;
	printNtimes(n - 1);
}

void printNtimes2(int i, int n) {
	if (i > n) return;
	cout << "yash.gg" << endl;
	printNtimes2(i + 1, n);
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	// printNtimes(n);
	printNtimes2(1, n);
}
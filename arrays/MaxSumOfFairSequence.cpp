#include<bits/stdc++.h>
using namespace std;

bool isPositive(int n) {
	if (n > 0) return true;
	return false;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	int A[4000];
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}

	bool element = isPositive(A[0]);
	int res = 0;
	int i = 0;
	if (isPositive(A[0]) != isPositive(A[1])) {
		res = A[0];
	}
	while (i < n) {
		if (isPositive(A[i]) != isPositive(A[i + 1])) {
			int max = A[i + 1];
			int j = i + 2;
			while ((isPositive(A[i + 1]) == isPositive(A[j])) && j < n) {
				if (max < A[j]) {
					max = A[j];
				}
				j++;
			}
			i = j;
			res = res + max;
		}

		else if (isPositive(A[i]) == isPositive(A[i + 1])) {
			int j = i + 1;
			int max = A[i];
			while ((isPositive(A[i]) == isPositive(A[j])) && j < n) {
				if (max < A[j]) {
					max = A[j];
				}
				j++;
			}
			i = j - 1;
			res += max;
		}
	}

	cout << res;
}

// INPUT
// 	10
// -1 18 13 18 -2 -16 7 -1 -213 11
// OUTPUT
// 32

// INPUT
// 5
// 21 12 13 -21 -2
// OUTPUT
// 19

// INPUT
// 2
// -153 -689
// OUTPUT
// -153
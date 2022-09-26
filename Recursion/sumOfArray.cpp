#include<iostream>
using namespace std;

int sumOfArray(int arr[], int n) {
	if (n == 1) return arr[0];
	return arr[n - 1] + sumOfArray(arr, --n);
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t--) {
		int n, arr[1000];
		cin >> n;

		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		int res = sumOfArray(arr, n);
		cout << res << endl;
	}
}

/*
// INPUT
4
3
9 8 9
26
15 24 58 61 79 3 97 81 81 45 62 21 72 72 68 45 11 50 87 20 28 77 51 89 58 66
44
34 57 82 41 65 35 82 27 36 12 6 40 66 99 25 29 22 25 12 24 65 15 5 43 28 33 76 32 13 95 22 84 71 23 28 7 65 94 18 47 9 42 61 73
10
21 22 46 12 61 21 33 16 99 96

// OUTPUT
26
1421
1868
427

*/
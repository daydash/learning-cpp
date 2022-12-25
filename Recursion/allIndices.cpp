// Incomplete

#include<iostream>
using namespace std;

int allIndex(int arr[], int n, int x, int output[]) {
	if (n == 0) return 0;

	int smallOutput = allIndex(arr + 1, n - 1, x, output);

	if (input[0] == x) {
		for (int i = smallAns - 1; i >= 0; i--) {
			output[i + 1] = output[i] + 1;
		} 3

		output[0] = 0;
		smallAns++;
	}
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t--) {
		int n, arr[1000], x;
		cin >> n;

		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		cin >> x;

		int res[n];

		res = allIndex(arr, n, x, res);

		for (int i = 0; i < ; i++)
			cout << res[i] << ' ';
		cout << endl;
	}
}

/*
// INPUT
4
4
9 8 10 8
8
26
15 24 58 61 79 3 97 81 81 45 62 21 72 72 68 45 11 50 87 20 28 77 51 89 58 66
23
44
34 57 82 41 65 35 82 27 36 12 6 40 66 99 25 29 22 25 12 24 65 15 5 43 28 33 76 32 13 95 22 84 71 23 28 7 65 94 18 47 9 42 61 73
61
10
21 22 46 12 61 21 33 16 99 96
25

// OUTPUT
1
-1
42
-1

*/
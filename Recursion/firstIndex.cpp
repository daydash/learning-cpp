#include<iostream>
using namespace std;

int firstIndex(int arr[], int start, int n, int x) {
	if (start == n) return -1;
	if (x == arr[start]) return start;
	return firstIndex(arr, ++start, n, x);
}


/* ********** INCOMPLETE SOLUTION ********** */
// int firstIndex2(int arr[], int n, int x) {
// 	if (n == 0) return -1;
// 	if (x == arr[0]) return ;
// 	return firstIndex2(arr + 1, --n, x) + ;
// }

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
		cout << firstIndex(arr, 0, n, x) << endl;
		// cout << firstIndex2(arr, n, x) << endl;
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
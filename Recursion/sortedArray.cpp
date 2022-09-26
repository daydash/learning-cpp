#include <iostream>
using namespace std;

bool is_sorted2(int a[], int size) {
	if (size == 0 || size == 1) {
		return true;
	}

	bool isSmallerOutput = is_sorted2(a + 1, size - 1);
	if (!isSmallerOutput) {
		return false;
	}
	if (a[0] > a[1]) {
		return false;
	} else {
		return true;
	}

}

bool is_sorted(int a[], int size) {
	if (size == 0 || size == 1) {
		return true;
	}

	if (a[0] > a[1]) {
		return false;
	}
	bool isSmallerSorted = is_sorted(a + 1, size - 1);
	return isSmallerSorted;
	/*if (isSmallerSorted) {
		return true;
	} else {
		return false;
	}*/
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

		for (int i = 0; i < n; i++)
			cin >> arr[i];

		cout << std::boolalpha << is_sorted(arr, n) << ' ' << is_sorted2(arr, n) << endl;
	}
}

/*
// INPUT
2
5
2 3 4 9 11
4
3 9 4 11

// OUTPUT
true true
false false

*/
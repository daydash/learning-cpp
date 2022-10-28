// Any one subsequence with sum K
// https://youtu.be/eQCS_v3bw0Q?list=PLgUwDviBIf0rGlzIn_7rsaR2FQ5e6ZOL9

#include<bits/stdc++.h>
using namespace std;

int printS(int ind, vector<int> arr, int n, int k, int sum) {
	// condition not satisfied
	// strictly done if array contains positives only
	if (k < sum) return 0;

	if (ind == n) {
		// base condition satisfied
		if (k == sum) return 1;
		// base condition not satisfied
		return 0;
	}

	// take or pick
	sum += arr[ind];
	int l = printS(ind + 1, arr, n, k, sum);
	sum -= arr[ind];

	// not pick
	int r = printS(ind + 1, arr, n, k, sum);

	return l + r;
}

int printF(int ind, vector<int> arr, int n, int k, int sum) {
	int cnt = 0;
	if (ind == n) {
		// base condition satisfied
		if (k == sum) return 1;
		// base condition not satisfied
		return 0;
	}

	// take or pick
	sum += arr[ind];
	if (printF(ind + 1, arr, n, k, sum) == 1) cnt += 1;
	sum -= arr[ind];

	// not pick
	if (printF(ind + 1, arr, n, k, sum) == 1) cnt += 1;

	return cnt;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	vector<int> arr = {1, 2, 1};
	int n = arr.size();
	int k = 2;

	cout << printF(0, arr, n, k, 0);
	cout << endl;
	cout << printS(0, arr, n, k, 0);

	return 0;
}
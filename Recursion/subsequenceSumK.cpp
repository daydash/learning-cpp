// Subsequence with sum K
// https://youtu.be/eQCS_v3bw0Q?list=PLgUwDviBIf0rGlzIn_7rsaR2FQ5e6ZOL9

#include<bits/stdc++.h>
using namespace std;

void printF(int ind, vector<int> &ds, vector<int> arr, int n, int k, int sum) {
	if (ind == n) {
		if (k == sum) {		// This check (k == sum)? will remain inside (ind == n)?, to get back/return to the previous function
			for (auto it : ds) {
				cout << it << " ";
			}
			// if (ds.size() == 0) {
			// 	cout << "{}";
			// }
			cout <<  endl;
		}					// (k == sum)? ends here
		return;
	}

	// take or pick the particular index into the subsequence
	ds.push_back(arr[ind]);
	sum += arr[ind];
	printF(ind + 1, ds, arr, n, k, sum);
	sum -= arr[ind];
	ds.pop_back();

	// not pick, or not take condition, this element is not added to your subsequence
	printF(ind + 1, ds, arr, n, k, sum);

}

int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	vector<int> arr = {1, 2, 1};
	int n = arr.size();
	int k = 2;
	vector<int> ds;

	printF(0, ds, arr, n, k, 0);

	return 0;
}
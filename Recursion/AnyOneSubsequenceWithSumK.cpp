// Any one subsequence with sum K
// https://youtu.be/eQCS_v3bw0Q?list=PLgUwDviBIf0rGlzIn_7rsaR2FQ5e6ZOL9

#include<bits/stdc++.h>
using namespace std;

bool printF(int ind, vector<int> &ds, vector<int> arr, int n, int k, int sum) {
	if (ind == n) {
		// base condition satisfied
		if (k == sum) {
			for (auto it : ds) cout << it << " ";
			cout <<  endl;
			return true;
		}
		// base condition not satisfied
		return false;
	}

	// take or pick the particular index into the subsequence
	ds.push_back(arr[ind]);
	sum += arr[ind];

	if (printF(ind + 1, ds, arr, n, k, sum) == true) return true;

	sum -= arr[ind];
	ds.pop_back();

	// not pick, or not take condition, this element is not added to your subsequence
	if (printF(ind + 1, ds, arr, n, k, sum) == true) return true;

	return false;
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

	printF(0, ds, arr, n, k, 0); // print nothing if no match found

	return 0;
}
// https://youtu.be/AxNNVECce8c?list=PLgUwDviBIf0rGlzIn_7rsaR2FQ5e6ZOL9

#include<bits/stdc++.h>
using namespace std;

void powerSetRecursive(int ind, vector<int> &ds, vector<int> &ans, vector<int> &arr, int n) {
	int sum = 0;
	if (ind == n) {
		for (auto it : ds) {
			sum += it;
		}

		ans.push_back(sum);
		return;
	}

	// take or pick the particular index into the subsequence
	ds.push_back(arr[ind]);
	powerSetRecursive(ind + 1, ds, ans, arr, n);
	ds.pop_back();

	// not pick, or not take condition, this element is not added to your subsequence
	powerSetRecursive(ind + 1, ds, ans, arr, n);
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	vector<int> arr = {3, 1, 2};
	int n = arr.size();

	vector<int> ds;
	vector<int> ans;
	powerSetRecursive(0, ds, ans, arr, n);

	sort(ans.begin(), ans.end());
	for (auto it : ans) {
		cout << it << endl;
	}
	return 0;
}
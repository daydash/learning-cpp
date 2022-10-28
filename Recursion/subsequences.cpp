// https://youtu.be/AxNNVECce8c?list=PLgUwDviBIf0rGlzIn_7rsaR2FQ5e6ZOL9

#include<bits/stdc++.h>
using namespace std;

void printF(int ind, vector<int> &ds, vector<int> arr, int n) {
	if (ind == n) {
		for (auto it : ds) {
			cout << it << " ";
		}
		if (ds.size() == 0) {
			cout << "{}";
		}
		cout << endl;
		return;
	}

	// take or pick the particular index into the subsequence
	ds.push_back(arr[ind]);
	printF(ind + 1, ds, arr, n);
	ds.pop_back();

	// not pick, or not take condition, this element is not added to your subsequence
	printF(ind + 1, ds, arr, n);

}

int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	vector<int> arr = {3, 1, 2};
	int n = arr.size();

	vector<int> ds;

	printF(0, ds, arr, n);

	return 0;
}
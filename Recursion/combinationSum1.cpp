#include<bits/stdc++.h>
using namespace std;

void findCombination(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds) {
	if (ind == arr.size()) {
		if (target == 0) {
			ans.push_back(ds);
		}
		return;
	}

	ds.push_back(arr[ind]);
	if (arr[ind] <= target) {
		findCombination(ind, target - arr[ind], arr, ans, ds);
	}
	ds.pop_back();

	findCombination(ind + 1, target, arr, ans, ds);
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
	vector<vector<int>> ans;
	vector<int> ds;
	findCombination(0, target, candidates, ans, ds);
	return ans;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	vector<int> arr = {2, 3, 6, 7};
	int target = 7;

	vector<vector<int>> res = combinationSum(arr, target);

	for (auto it : res) {
		for (auto it2 : it) {
			cout << it2 << " ";
		}
		cout << endl;
	}
}
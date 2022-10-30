#include<bits/stdc++.h>
using namespace std;

void findUniqueCombinations(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds ) {
	if (target == 0) {
		ans.push_back(ds);
		return;
	}
	for (int i = ind; i < arr.size(); i++) {
		if (i > ind && arr[i] == arr[i - 1]) continue;
		if (arr[i] > target) break;
		ds.push_back(arr[i]);
		findUniqueCombinations(i + 1, target - arr[i], arr, ans, ds);
		ds.pop_back();
	}
}

vector<vector<int>> combinationSum2(vector<int> &candidates, int target) {
	sort(candidates.begin(), candidates.end());
	vector<vector<int>> ans;
	vector<int> ds;
	findUniqueCombinations(0, target, candidates, ans, ds);
	return ans;
}


// Brute Force - RUNTIME ERROR : heap-buffer-overflow
/*
void findUniqueCombinations(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds ) {
	if (ind == arr.size()) {
		if (target == 0) {
			sort(ds.begin(), ds.end());
			ans.push_back(ds);
		}
		return;
	}

	ds.push_back(arr[ind]);
	if (arr[ind] <= target) {
		findUniqueCombinations(ind + 1, target - arr[ind], arr, ans, ds);
	}
	ds.pop_back();

	findUniqueCombinations(ind + 1, target, arr, ans, ds);
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
	vector<vector<int>> ans;
	vector<int> ds;
	vector<vector<int>> res;
	findUniqueCombinations(0, target, candidates, ans, ds);
	sort(ans.begin(), ans.end());
	for (int i = 0; i < ans.size() ; i++) {
		if (ans[i] != ans[i + 1]) {
			res.push_back(ans[i]);
		}
	}
	return res;
}
*/


int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	vector<int> arr = {10, 1, 2, 7, 6, 1, 5};
	int target = 8;

	vector<vector<int>> res = combinationSum2(arr, target);

	for (auto it : res) {
		for (auto it2 : it) {
			cout << it2 << " ";
		}
		cout << endl;
	}
}
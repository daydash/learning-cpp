#include<bits/stdc++.h>
using namespace std;

// Runtime - 0ms
void solve(int ind, int target, int k, vector<vector<int>> &ans, vector<int> &ds)
{
	if (target == 0 && k == 0) {
		ans.push_back(ds);
		return;
	}
	if (k == 0)return;
	for (int i = ind; i < 10; i++) {
		// if (target >= i && k > 0 ) {
		// 	ds.push_back(i);
		// 	solve(ans, ds, i + 1, k - 1, target - i);
		// 	ds.pop_back();
		// }
		if (i > target || k <= 0) break;
		ds.push_back(i);
		solve(i + 1, target - i, k - 1, ans, ds);
		ds.pop_back();
	}
	if (target != 0) return;
}
vector<vector<int>> combinationSum3b(int k, int target) {
	vector<vector<int>> ans;
	vector<int> ds;
	solve( 1, target, k, ans, ds);
	return ans;
}

// Runtime - 3ms
/*
void findUniqueCombinations(int ind, int target, int k, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds ) {
	if (target == 0 && k == 0) {
		ans.push_back(ds);
		return;
	}
	for (int i = ind; i < arr.size(); i++) {
		// if (i > ind && arr[i] == arr[i - 1]) continue;
		if (arr[i] > target || k <= 0) break;
		ds.push_back(arr[i]);
		findUniqueCombinations(i + 1, target - arr[i], k - 1, arr, ans, ds);
		ds.pop_back();
	}
}

vector<vector<int>> combinationSum3a( int k, int n) {
	vector<vector<int>> ans;
	vector<int> ds;
	vector<int> candidates{1, 2, 3, 4, 5, 6, 7, 8, 9};
	findUniqueCombinations(0, n, k, candidates, ans, ds);
	return ans;
}
*/

int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	int k = 3;
	int target = 9;

	// vector<vector<int>> res = combinationSum3a(k, target);
	vector<vector<int>> res = combinationSum3b(k, target);

	for (auto it : res) {
		for (auto it2 : it) {
			cout << it2 << " ";
		}
		cout << endl;
	}
}
#include<bits/stdc++.h>
using namespace std;

// wrong ans, nums = [1,2], k = 3, expOP = [2,1], OP = [1,2]
/*
void rotate(vector<int>& nums, int k) {
	if((nums.size() == 0 || nums.size() == 1) || nums.size()<=k ) return;
	for (int i = 0; i < k; i++) {
		swap(nums[nums.size() - k  + i], nums[i]);
		swap(nums[nums.size() - k  + i], nums[k + i]);
	}
}
*/

int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	vector<int> nums{1, 2, 3, 4, 5, 6, 7};
	int k = 3;

	rotate(nums, k);
	for (auto it : nums) cout << it << " ";
}
#include<bits/stdc++.h>
using namespace std;

void rev(vector <int> &nums, int k) {
	int start = 0, end = k - 1;
	while (start <= end) {
		swap(nums[end], nums[start]);
		start++; end--;
	}
}

void rotate(vector<int>& nums, int k) {
	k = k % nums.size(); //Calculating the appropriate size of k so as to prevent any index out of bounds
	reverse(nums.begin(), nums.end()); // reversing the entire array
	rev(nums, k); // reversing first k elements of the array
	reverse(nums.begin() + k, nums.end()); //reversing reset of the (nums.size()-k) elements of the array
}

// Explaination of above code:
/*
nums = [1 2 3 4 5 6 7]
k = 3
nums.size() = 7

k % nums.size() = 3
reverse(nums.begin(), nums.end()); // nums = [7 6 5 4 3 2 1]
rev(nums, k); // nums = [5 6 7 4 3 2 1] // from *start* (i.e. 0th index) to *end* (i.e. 2nd index) swapped the elements
reverse(nums.begin() + k, nums.end()); // finally reverse the array from *nums.begin() + k* (i.e. 3rd index) to last index
which gives the the nums = [5 6 7 1 2 3 4]
*/

// BruteForce
/*
void rotate(vector<int>& nums, int k) {
	vector<int> temp(nums.size());

	for (int i = 0; i < nums.size(); i++) {
		temp[(i + k) % nums.size()] = nums[i];
	}
	for (int i = 0; i < nums.size(); i++) {
		nums[i] = temp[i];
	}
}
*/

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
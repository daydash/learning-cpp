#include<bits/stdc++.h>
using namespace std;

// WRONG ANSWER

bool sorted(vector<int>& nums, int ind) {
    for (int i = 0; i < nums.size() - 1; i++) {
        if (!(nums[i] <= nums[i + 1]))
            return false;
    }
    // if (ind == 0) {
    //     if ((nums[0] > nums[nums.size() - 1])) return false;
    // }
    return true;
}

void rotate(vector<int>& nums, int k) {
    k = k % nums.size();
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}

bool solve(vector<int> &nums) {
    int min = *min_element(nums.begin(), nums.end());
    int ind;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == min) {
            ind = i;
            break;
        }
    }
    // if (ind == 0) ind = nums.size() - 1;

    rotate(nums, nums.size() - ind);
    return sorted(nums, ind);

    // return true;
}


int main() {

#ifndef ONLINE_JUDGE
    freopen("D:/daydash/input.txt", "r", stdin);
    freopen("D:/daydash/output.txt", "w", stdout);
#endif

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> nums;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            nums.push_back(x);
        }

        bool ans = solve(nums);
        for (auto it : nums) cout << it << " ";
        cout << boolalpha << ans;
        cout << endl;
    }
}
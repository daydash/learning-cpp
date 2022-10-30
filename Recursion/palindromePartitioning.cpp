#include<bits/stdc++.h>
using namespace std;

bool isPalimdrome(string s, int start, int end) {
	if (start == end - 1) {
		if (s[start] != s[end]) return false;
	}
	for (int i = start; i <= (end ) / 2; i++) {
		if (s[i] != s[end - i]) return false;
	}
	return true;
}

// bool isPalimdrome(string s, int start, int end) {
// 	// if (start == end - 1) {
// 	// 	if (s[start] != s[end]) return false;
// 	// }
// 	for (int i = start; i <= end / 2; i++) {
// 		if (s[i] != s[end - i]) return false;
// 	}
// 	return true;
// }

void findPairs(string s, int ind, vector<vector<string>> ans, vector<string> ds) {
	if (ind == s.size()) {

	}
	return;
}

vector<vector<string>> partition(string s) {
	vector<vector<string>> ans;
	vector<string> ds;
	findPairs(s, 0, ans, ds);
	return ans;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	string s = "aab";

	vector<vector<string>> res = partition(s);
	for (auto it : res) {
		for (auto it2 : it) {
			cout << it2 << " ";
		}
		cout << endl;
	}

	cout << boolalpha << isPalimdrome(s, 1, 2);
}
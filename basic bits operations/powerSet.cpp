#include<bits/stdc++.h>
using namespace std;

// https://youtu.be/b7AYbpM5YrE

vector<string> AllPossibleStrings(string s) {
	int n = s.length();
	vector<string>ans;
	for (int num = 0; num < (1 << n); num++) {
		string sub = "";
		for (int i = 0; i < n; i++) {
			//check if the ith bit is set or not
			if (num & (1 << i)) {
				sub += s[i];
			}
		}
		if (sub.length() > 0) {
			ans.push_back(sub);
		}
	}
	sort(ans.begin(), ans.end());
	return ans;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	string s = "abc";

	// int n = s.length();
	// for (int num = 0; num <= (pow(2, n) - 1); num++) {
	// 	string sub = "";
	// 	for (int i = 0; i <= n - 1; i++) {
	// 		if (num & (1 << i))	sub += s[i];
	// 	}
	// 	cout << sub << endl;
	// }

	vector<string>ans = AllPossibleStrings(s);
	//printint all the subsequence.
	cout << "All possible subsequences are " << endl;
	for (auto it : ans) {
		cout << it << " ";
	}
}
#include<bits/stdc++.h>
using namespace std;

bool palindrome(int i, string str) {
	if (i >= str.size() / 2) return true;
	if (str[i] != str[str.size() - i - 1]) return false;
	return palindrome(i + 1, str);
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	string str;
	cin >> str;

	cout << std::boolalpha << palindrome(0, str);
}
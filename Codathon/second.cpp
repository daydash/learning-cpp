#include<bits/stdc++.h>
using namespace std;

int max_arr(int a[], int start, int end) {
	int m = a[start];
	for (int i = start + 1 ; i < end; i++) {
		if (m < a[i]) {
			m = a[i];
		}
	}
	return m;
}

int longest_substring(int s[1000][1000], int n) {

	int k = n - 1;
	int sum = 0;
	while (n != 0) {
		n--;

		sum = max_arr(s[k], 0, n);

	}
	return sum;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif



	int n;
	cin >> n;
	int s[1000][1000];
	for (int i = 0; i < n; i++) {
		for (int j = 0 ; j < n; j++) {
			cin >> s[i][j];
		}
	}


	for (int i = 0; i < n; i++) {
		for (int j = 0 ; j < n; j++) {
			cout << s[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl;
	cout << longest_substring(s, n) << endl;
}
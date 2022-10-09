#include<bits/stdc++.h>
using namespace std;

void revArr(int arr[], int l, int r) {
	if (l >= r) return;
	swap(arr[l], arr[r]);
	revArr(arr, l + 1, r - 1);
}

void revArr2(int i, int arr[], int n ) {
	if (i >= n / 2) return;
	swap(arr[i], arr[n - i - 1]);
	revArr2(i + 1, arr, n);
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n ; i++) cin >> arr[i];
	// revArr(arr, 0, n - 1);
	revArr2(0, arr, n);
	for (int i = 0; i < n ; i++) cout << arr[i] << ' ';
}
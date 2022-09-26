#include <iostream>
using namespace std;

int minimumSum(int a[], int n)
{
	int dp[n];

	if (n == 1)
		return a[0];
	if (n == 2)
		return min(a[0], a[1]);
	if (n == 3)
		return min(a[0], min(a[1], a[2]));

	// If there are four values, return minimum
	// of the four elements of aay
	if (n == 4)
		return min(min(a[0], a[1]), min(a[2], a[3]));

	dp[0] = a[0];
	dp[1] = a[1];
	dp[2] = a[2];
	dp[3] = a[3];

	for (int i = 4; i < n; i++)
		dp[i] = a[i] + min(min(dp[i - 1], dp[i - 2]), min(dp[i - 3], dp[i - 4]));

	return min(min(dp[n - 1], dp[n - 2]), min(dp[n - 4], dp[n - 3]));
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << minimumSum(a, n);
	return 0;
}

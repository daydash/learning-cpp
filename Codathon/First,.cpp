#include <bits/stdc++.h>
#include <vector>
using namespace std;

int minSum(vector<int> v, int n)
{
	vector<int> dp;

	if (n == 1) return v.at(0);

	if (n == 2) return min(v.at(0), v.at(1));

	if (n == 3) return min(v.at(0), min(v.at(1), v.at(2)));

	if (n == 4) return min(min(v.at(0), v.at(1)), min(v.at(2), v.at(3)));

	dp.at(0) = v.at(0);
	dp.at(1) = v.at(1);
	dp.at(2) = v.at(2);
	dp.at(3) = v.at(3);

	for (int i = 4; i < n; i++) dp.at(i) = v.at(i) + min(min(dp.at(i - 1), dp.at(i - 2)), min(dp.at(i - 3), dp.at(i - 4)));

	return min(min(dp.at(n - 1), dp.at(n - 2)), min(dp.at(n - 3), dp.at(n - 4)));
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int ele;
		cin >> ele;
		v.push_back(ele);
	}

	for ( auto it : v)
		cout << it;

	cout << minSum(v, n) << endl << "YASh";
	return 0;
}

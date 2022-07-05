#include<bits/stdc++.h>
using namespace std;

int main() {


#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for getting input from output.txt
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;

	while (t--) {

		int n, x, A[1000];
		cin >> n >> x;

		int sum = 0;

		// for (int i = 0; i < n - 1; i++) {
		// 	A[i] = i + 1;
		// 	sum += i + 1;
		// }

		// A[n - 1] = (n * x) - sum;

		// for (int i = 0 ; i < n; i++) {
		// 	cout << A[i] << " ";
		// }

		// cout << endl;



		// Vectors

		vector<int> v;

		if (n == 1) v.emplace_back(x);

		else {
			for (int i = 0; i < n / 2; i++) {
				v.emplace_back(i + 1);


				if ((sum + i + 1) < 1000) sum += i + 1;
				else {
					// cout << "i is " << i << endl;
					break;

				}

				for (int i = n / 2; i < n - 1 ; i)
				{

				}

			}

			v.emplace_back((n * x) - sum);

			for (; i < n; i++) {
				v.emplace_back()
			}

		}

		for (auto it : v) {
			cout << it << " ";
		}

		cout << endl;


	}

	return 0;
}
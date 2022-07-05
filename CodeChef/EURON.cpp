// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("inputcc.txt", "r", stdin);
// 	freopen("outputcc.txt", "w", stdout);
// #endif

// 	vector<int> v(0);
// 	int n, count = 0;

// 	cin >> n;

// 	for (int i = 0; i < n; i++) {
// 		int x;
// 		cin >> x;
// 		v.push_back(x);
// 	}

// 	for (int i = 1; i < n; i++) {
// 		for (int j = 0; j < i; j++) {
// 			if (v.at(i) < v.at(i - 1)) {
// 				count++;
// 			}
// 		}
// 	}

// 	cout << count;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("inputcc.txt", "r", stdin);
	freopen("outputcc.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	vector <long int> v;
	long int count = 0;
	for (int i = 0; i < n; i++) {
		long int x;
		cin >> x;
		if (v.empty() || x > v.back()) {
			v.push_back(x);
		}
		else {
			long int y = upper_bound(v.begin(), v.end(), x) - v.begin();
			count += v.size() - y;
			v.insert(v.begin() + y, x);
		}
	}
	cout << count << endl;
	return 0;
}

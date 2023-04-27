#include<iostream>
using namespace std;

bool isPrime(int x) {
	for (int i = 2; i <= x / 2; i++) {
		if (x % i == 0) return false;
	}
	return true;
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	int N;
	cin >> N;
	int cnt = 0;

	for (int i = 2; i <= 7919; i++) {
		if (isPrime(i)) {
			cnt++;
			if (cnt == N) {
				cout << i;
				return 0;
			}
		}
	}
}



#include<bits/stdc++.h>
using namespace std;

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


		cout << endl;
	}
}
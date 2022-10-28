#include<bits/stdc++.h>
using namespace std;

int solution(int n, int s) {
	if (n == 1) return 2;

	return 1 + ( solution(n - 1, s - 1) * s);
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	cout << solution(n, n) << endl;
}
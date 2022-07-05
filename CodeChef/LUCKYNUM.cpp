#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for getting input from output.txt
	freopen("output.txt", "w", stdout);
#endif
	// start the code here

	int a, b, c, n = 3;
	cin >> n;
	while (n != 0) {
		cin >> a >> b >> c;

		if (a == 7 || b == 7 || c == 7) {
			cout << "YES";
		}
		else {
			cout << "NO";
		}
		cout << endl;
		n--;
	}
	return 0;
}
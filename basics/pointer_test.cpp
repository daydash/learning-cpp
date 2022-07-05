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

	int arr[] = {4, 5, 6, 7};
	int *p = (arr + 1);
	cout << *arr + 9;

	cout << endl;
	return 0;
}
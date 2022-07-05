#include <iostream>
using namespace std;
int main() {
	int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int *p = &a[0];
	cout << p << endl << *p << endl;
	int * q = p;
	cout << q;
	// cout << a[2] << endl << a << endl << &a[0] << endl << &a << endl << *(a + 1) << endl;
	return 0;
}
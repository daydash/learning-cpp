#include<bits/stdc++.h>
using namespace std;

void prnt(int * p) {
	cout << * p << endl;
}


void incrementPointer(int * p) {
	p = p + 1;
}


void increment(int * p) {
	(*p)++;
}


int func(int arr[], int size) {

	int sum = 0;

	for (int x = 0; x < size; x++) {
		cout << arr[x] << " ";
		sum += arr[x];
	}
	cout << endl;
	return sum;
}


int main() {

#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("D:/daydash/input.txt", "r", stdin);
	// for getting input from output.txt
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	int i = 10;
	int * p = &i;

	prnt(p);

	cout << p << endl;			// 0x7bfe14
	incrementPointer(p);
	cout << p << endl;			// 0x7bfe14		// same memory address as the <p> in main() and <p> in incrementPointer() are different


	cout << *p << endl;			// 10
	increment(p);
	cout << *p << endl;			// 11 		// This time value is update even both the <p> are still different as they are pointing towards same memory address and changes the value present at that location which is the common location for the program


	// WKT : array passes as a pointer in a function BUT also we can **pass the part of an array** as parameter

	int a[10];

	for (int x = 0; x < 10; x++) {
		a[x] = x;
	}
	cout << func(a, 10) << endl;		// 55 -> sum from a[0] to a[9] (or a[size - 1], where size is 10)
	// 0 1 2 3 4 5 6 7 8 9

	cout << func(a + 3, 5) << endl;		// 25 -> sum from a[3] to a[7] (or a[intital + size - 1], where size is 5)
	// 3 4 5 6 7

	cout << endl;
}
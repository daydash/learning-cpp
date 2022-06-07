#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("D:/daydash/input.txt", "r", stdin);
	// for getting input from output.txt
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	int a[10];
	cout << a << endl;				// 0x7bfdf0
	cout << &a << endl;				// 0x7bfdf0
	cout << &a[0] << endl;			// 0x7bfdf0

	a[0] = 5;						// 5
	cout << *a << endl;
	a[1] = 10;
	cout << *(a + 1) << endl;		// 10

	/*

	*(a+1) -> a[1]
	*(a+i) -> a[i]
	*(i+a) -> a[i]

	*/


	int * p = &a[0];
	cout << a << endl;				// 0x7bfdf0
	cout << p << endl;				// 0x7bfdf0

	cout << &a << endl;				// 0x7bfdf0
	cout << &p << endl;				// 0x8efde8		// different location

	cout << sizeof(p) << endl;		// 8
	cout << sizeof(a) << endl;		// 40		// 4*10


	p = p + 1;						// as p is at 0x7bfdf0 + 1 (4 bytes) = 0x7bfdf4
	cout << p << endl;				// 0x7bfdf4

	p = a + 1;						// as a is at 0x7bfdf0 + 1 (4 bytes) = 0x7bfdf4
	cout << p << endl;				// 0x7bfdf4

	p = p + 1;						// as p is now at 0x7bfdf4 (due to prev. a + 1) + 1 (4 bytes) = 0x7bfdf8
	cout << p << endl;				// 0x7bfdf8

	/*
		NOT POSSIBLE / ALLOWED

		a = a + 3;				// resizing array
		a++;					// resizing array
		a = p;					// change the memory address allotted to array a

		BUT
		p = a;  // is allowed	// as address of array a is to be inserted in pointer p

	*/



	cout << endl;
}
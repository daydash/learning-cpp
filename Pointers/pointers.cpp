#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("D:/daydash/input.txt", "r", stdin);
	// for getting input from output.txt
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	int i = 19;

	cout << i << endl; 			// 19
	cout << &i << endl;			// 0x7bfe04

	int * p  = &i;
	// cout << &p << endl;		// 0x7bfde8 -> address of p
	cout << p << endl;			// 0x7bfe04 -> content of p
	cout << *p << endl;			// 19 -> content at the location (i.e content of p)

	float f = 10.2;
	float * pf = &f;

	double d = 122.32;
	double * pd = &d;


	cout << sizeof(p) << endl;	// 8

	cout << i << endl;			// 19
	cout << *p << endl;			// 19

	i++;

	cout << i << endl;			// 20
	cout << *p << endl;			// 20

	int a = i; // int a = *p;
	a++;

	cout << a << endl;			// 21
	cout << i << endl;			// 20
	cout << *p << endl;			// 20

	//

	i = 10;
	cout << i << endl;			// 10
	cout << *p << endl;			// 10

	*p = 50;
	cout << i << endl;			// 50
	cout << *p << endl;			// 50

	(*p)++;
	cout << i << endl;			// 51
	cout << *p << endl;			// 51

	//

	int y;						// garbage value
	cout << y << endl;			// 2

	y++;						// garbage value + 1
	cout << y << endl;			// 3

	int * yp;					// garbage address in yp's value
	// int * yp = 0; 			// always initialize a pointer will null
	// int * yp = nullptr; 		// always initialize a pointer will null
	// int * yp = NULL; 		// always initialize a pointer will null
	cout << yp << endl;															// 0x401519 -> some garbage address
	cout << *yp << endl;		// printing the value at the garbage address	// 264275272 -> some garbage value at the garbage address
	// (*yp)++; 				//never modify the unknown value, this might leads to the failure of the system
	// cout << *yp << endl;

	//

	i = 10;
	*p = i;

	cout << i << endl;			// 10
	cout << &i << endl;			// 0x7bfdf4
	cout << *p << endl;			// 10 -> content at the location (i.e content of p)
	cout << p << endl;			// 0x7bfdf4 -> content of p
	// cout << &p << endl;		// 0x7bfde8 -> address of p

	//

	int * q = p;				// q is a copy of
	cout << q << endl;			// 0x7bfdf4
	cout << *q << endl;			// 10
}
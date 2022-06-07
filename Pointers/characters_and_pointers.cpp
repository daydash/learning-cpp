#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("D:/daydash/input.txt", "r", stdin);
	// for getting input from output.txt
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	int a[] = {1, 2, 3};
	char b[] = "abc";

	cout << a << endl;			// 0x7bfe14
	cout << b << endl;			// abc

	char * c = &b[0];
	cout << c << endl;			// abc		// No address here??

	/*
	NOT printing address as in char pointer it will iterate until it get a null character (\0).
	Since after "abc\0" there is a null character (\0).
	Hence it will start form 'a' as usual and end at 'c' just before the null character.
	*/

	char c1 = 'a';
	char * pc = &c1;

	cout << c1 << endl;			// a
	cout << pc << endl;			// a?fw?	// random values after 'a' until get a \0

	char str[] = "abcde";
	// char * pstr = "abcde";	-> Bad Practice -> as this will be in the read only format & can be dangerous to access


	cout << endl;
}
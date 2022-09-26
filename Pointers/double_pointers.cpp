#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("D:/daydash/input.txt", "r", stdin);
	// for getting input from output.txt
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	int i = 10;
	int *p = &i;

	cout << i << endl;
	cout << &i << endl;
	cout << *p << endl;
	cout << p << endl;
	cout << &p << endl;

	cout << endl;
}
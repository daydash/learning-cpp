#include<iostream>
using namespace std;

string YourName() {
	string a;
	cin >> a;
	return a;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string a = YourName();
	// cout << "Enter the name" << endl;
	// cin >> a;

	cout << "Wishing you a very Happy and Healthy Diwali " << a;
	return 0;
}
#include<bits/stdc++.h>
using namespace std;

#include "FractionClass.cpp"

int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	Fraction F1(10, 2);
	Fraction F2(15, 4);

	F1.print();
	F2.print();

	// F1.add(F2);
	// F1.print();

	F1.multiply(F2);
	F1.print();

}
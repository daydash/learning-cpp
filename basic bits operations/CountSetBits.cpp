#include <iostream>
using namespace std;

int main() {

	// int mask = 1;

	// int no = 15;
	// int set_bits = 0;

	// for (int i = 1; i <= 31; i++) {
	// 	if ((no & mask) > 0) {
	// 		set_bits++;
	// 	}
	// 	mask = mask * 2;
	// }

	// cout << set_bits << endl;


// By taking input
	int no;
	cin >> no; // no = 10;
	int set_bitCount = 0; // Variable to count set bits

	while (no != 0) {
		if ((no & 1) == 1) {
			set_bitCount++;
		}
		no = no >> 1;
	}
	cout << "Set Bits: " << set_bitCount;
	cout << endl;


	return 0;
}
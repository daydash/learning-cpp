#include <iostream>
#include<cmath>
using namespace std;

int countSetBit(int n) {
	int i = 0, setBit_cnt = 0;
	while (n >= pow(2, i) ) {
		if ( (n & (1 << i)) != 0 ) setBit_cnt++;
		i++;
	}
	return setBit_cnt;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

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
	int temp = no;
	int set_bitCount = 0; // Variable to count set bits

	while (no != 0) {
		if ((no & 1) == 1) {
			set_bitCount++;
		}
		no = no >> 1;
	}
	cout << "Set Bits: " << set_bitCount;
	cout << endl;

	cout << countSetBit(temp) << endl;


	return 0;
}
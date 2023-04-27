#include<bits/stdc++.h>
using namespace std;

void pattern1(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << '*';
		}
		cout << endl;
	}
}

void pattern2(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << '*';
		}
		cout << endl;
	}
}

void pattern3(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << j + 1;
		}
		cout << endl;
	}
}

void pattern4(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << i + 1;
		}
		cout << endl;
	}
}

void pattern5(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			cout << '*';
		}
		cout << endl;
	}
}

void pattern6(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			cout << j + 1;
		}
		cout << endl;
	}
}

void pattern7(int n) {
	for (int i = 0; i < n; i++) {
		// for (int j = i; j < n - 1 ; j++) {
		for (int j = 0; j < n - i - 1 ; j++) {
			cout << ' ';
		}
		for (int j = 0; j < 2 * i + 1 ; j++) {
			cout << '*';
		}
		// optional
		// for (int j = 0; j < n - i - 1 ; j++) {
		// 	cout << ' ';
		// }
		cout << endl;
	}
}

void pattern8(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i ; j++) {
			cout << ' ';
		}
		// for (int j = 0; j < 2 * (n - i) - 1 ; j++) {
		for (int j = 0; j < 2 * n - (2 * i + 1); j++) {
			cout << '*';
		}
		// optional
		for (int j = 0; j < i ; j++) {
			cout << ' ';
		}
		cout << endl;
	}
}

void pattern9(int n) {
	pattern7(n);
	pattern8(n);
}

void pattern10(int n) {
	for (int i = 0; i < 2 * n ; i++) {

		// int stars = i;
		// if (i > n) stars = 2 * n - i;
		int stars = i > n ? 2 * n - i : i;
		for (int j = 0; j < stars ; j++) {
			cout << '*';
		}
		cout << endl;
	}
}

void pattern11(int n) {
	int x = 1;
	for (int i = 0; i < n; i++) {
		x = i % 2 == 0 ? 0 : 1;
		for (int j = 0; j <= i; j++) {
			cout << x;
			x = 1 - x;
		}
		cout << endl;
	}
}

void pattern12(int n) {
	// int space = 2 * (n - 1);
	for (int i = 0; i < n; i++) {

		for (int j = 0; j <= i; j++) {
			cout << j + 1;
		}
		// for (int j = 0; j < space; j++) {
		for (int j = 0; j < 2 * n - 2 * (i + 1); j++) {
			cout << ' ';
		}
		for (int j = i; j >= 0; j--) {
			cout << j + 1;
		}
		cout << endl;
		// space -= 2;
	}
}

void pattern13(int n) {
	int num = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << num << ' ';
			num += 1;
		}
		cout << endl;
	}
}

void pattern14(int n) {
	for (int i = 0; i < n; i++) {
		for (char j = 'A'; j <= 'A' + i; j++) {
			cout << j ;
		}
		cout << endl;
	}
}

void pattern15(int n) {
	for (int i = 0; i < n; i++) {
		for (char j = 'A'; j <= 'A' + (n - i - 1); j++) {
			cout << j ;
		}
		cout << endl;
	}
}

void pattern16(int n) {
	for (int i = 0; i < n; i++) {
		char ch = 'A' + i;
		for (int j = 0; j <= i; j++) {
			cout << ch ;
		}
		cout << endl;
	}
}

void pattern17(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			cout << ' ' ;
		}
		char ch = 'A';
		int breakpoint = (2 * i + 1) / 2;
		for (int j = 0; j < 2 * i + 1; j++) {
			cout << ch ;
			j < breakpoint ? ch++ : ch--;
		}
		for (int j = 0; j < n - i - 1; j++) {
			cout << ' ' ;
		}
		cout << endl;
	}
}

void pattern18(int n) {
	for (int i = 0; i < n; i++) {
		// char ch = 'A' + n - i - 1;
		// for (int j = i; j >= 0; j--) {
		// 	cout << ch;
		// 	ch++;
		// }
		for (char j = 'E' - i; j <= 'E'; j++) {
			cout << j ;
		}
		cout << endl;
	}
}

void pattern19(int n) {
	// upper half
	for (int i = 0; i < n; i++) {
		for (int j = n; j > i; j--) {
			cout << '*';
		}

		for (int j = 0; j < 2 * i; j++) {
			cout << ' ';
		}

		for (int j = n; j > i; j--) {
			cout << '*';
		}
		cout << endl;
	}

	// lower half
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i + 1; j++) {
			cout << '*';
		}

		for (int j = 0; j < 2 * (n - i - 1) ; j++) {
			cout << ' ';
		}

		for (int j = 0; j < i + 1; j++) {
			cout << '*';
		}
		cout << endl;
	}
}

void pattern19_2(int n) {
	// upper half
	int spaces = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= n - i; j++) {
			cout << '*';
		}

		for (int j = 0; j < spaces; j++) {
			cout << ' ';
		}

		for (int j = 1; j <= n - i; j++) {
			cout << '*';
		}
		spaces += 2;
		cout << endl;
	}

	// lower half
	spaces = 2 * n - 2;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << '*';
		}

		for (int j = 0; j < spaces ; j++) {
			cout << ' ';
		}

		for (int j = 1; j <= i; j++) {
			cout << '*';
		}
		spaces -= 2;
		cout << endl;
	}
}

void pattern20(int n) {
	// upper half
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i + 1; j++) {
			cout << '*';
		}

		for (int j = 0; j < 2 * (n - i - 1) ; j++) {
			cout << ' ';
		}

		for (int j = 0; j < i + 1; j++) {
			cout << '*';
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			cout << '*';
		}

		for (int j = 0; j < 2 * (i + 1); j++) {
			cout << ' ';
		}

		for (int j = 0; j < n - i - 1; j++) {
			cout << '*';
		}
		cout << endl;
	}
}

void pattern20_2(int n) {
	// initialising the spaces.
	int spaces = 2 * n - 2;

	// Outer loop for printing row.
	for (int i = 1; i <= 2 * n - 1; i++) {

		// stars for first half
		int stars = i;

		// stars for the second half.
		if (i > n) stars = 2 * n - i;

		//for printing the stars
		for (int j = 1; j <= stars; j++) {
			cout << "*";
		}

		//for printing the spaces
		for (int j = 1; j <= spaces; j++) {
			cout << " ";
		}

		//for printing the stars
		for (int j = 1; j <= stars; j++) {
			cout << "*";
		}

		cout << endl;
		if (i < n) spaces -= 2;
		else spaces += 2;
	}
}

void pattern21(int n) {
	for (int i = 0; i < n; i++) {
		// inner loop for printing the stars at borders only.
		for (int j = 0; j < n; j++) {

			if (i == 0 || j == 0 || i == n - 1 || j == n - 1) cout << "*";
			else cout << " "; // if not border index, print space.
		}
		cout << endl;
	}
}

void pattern(int n) {
	for (int i = 0; i < 2 * n - 1; i++) {
		for (int j = 0; j < 2 * n - 1; j++) {

			if (i == 0 || j == 0 || i == 2 * (n - 1) || j == 2 * (n - 1)) cout << n;
			else cout << ' ';
		}
		cout << endl;
	}
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		pattern(n);
		cout << endl;
	}
}
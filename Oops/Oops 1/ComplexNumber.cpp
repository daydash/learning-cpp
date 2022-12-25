#include <iostream>
using namespace std;

#include "ComplexNumberClass.cpp"

int main() {

#ifndef ONLINE_JUDGE
    freopen("D:/daydash/input.txt", "r", stdin);
    freopen("D:/daydash/output.txt", "w", stdout);
#endif

    int t;
    cin >> t;

    while (t--) {
        int real1, imaginary1, real2, imaginary2;

        cin >> real1 >> imaginary1;
        cin >> real2 >> imaginary2;

        ComplexNumbers c1(real1, imaginary1);
        ComplexNumbers c2(real2, imaginary2);

        int choice;
        cin >> choice;

        if (choice == 1) {
            c1.plus(c2);
            c1.print();
        }
        else if (choice == 2) {
            c1.multiply(c2);
            c1.print();
        }
        else {
            return 0;
        }
    }
}

// INPUT
/*
3
10 15
12 40
1
3 6
7 9
2
15 20
2 10
3
*/

// OUTPUT
/*
22 + i55
-33 + i69

*/
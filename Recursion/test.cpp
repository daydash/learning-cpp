#include <iostream>
using namespace std;

void print(int n) {
    if (n < 0) {
        return;
    }
    if (n == 0) {
        cout << n << " ";
        return;
    }
    print(n --);
    cout << n << " ";
}

int main() {

// #ifndef ONLINE_JUDGE
//     freopen("D:/daydash/input.txt", "r", stdin);
//     freopen("D:/daydash/output.txt", "w", stdout);
// #endif

    int num = 3;
    print(num);
}

#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    int X;
    float Y;
    cin >> X >> Y;
    cout << setprecision(2) << fixed;
    if (X > 0 && X <= 2000 && Y > 0 && Y <= 2000) {
        if (X % 5 == 0 && Y >= X + 0.5)
        {
            cout << Y - X - 0.50;
        }
        else
            cout << Y;

    }
    return 0;
}
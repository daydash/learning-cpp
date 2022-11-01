#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0) return false;
    int rev = 0;
    int t = x;
    while (t != 0) {
        rev = (rev * 10) + (t % 10);
        t /= 10;
    }
    return (rev == x);
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("D:/daydash/input.txt", "r", stdin);
    freopen("D:/daydash/output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    cout << boolalpha << isPalindrome(n) << endl;
}
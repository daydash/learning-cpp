#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("D:/daydash/input.txt", "r", stdin);
    // for getting input from output.txt
    freopen("D:/daydash/output.txt", "w", stdout);
#endif

    int t;
    cin >> t;

    while (t--) {

        int a, b, c;
        cin >> a >> b >> c;
        if (a < b && a < c) cout << "Draw";
        else if (b < c) cout << "Bob";
        else cout << "Alice";

        cout << endl;
    }
}
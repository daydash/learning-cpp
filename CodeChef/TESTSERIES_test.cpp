#include<iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputcc.txt", "r", stdin);
    freopen("outputcc.txt", "w", stdout);
#endif

    int t, a;
    cin >> t;
    if (t >= 1 && t <= 1000) {

        while (t--) {
            int A[] = {0 , 0, 0};
            for (int i = 0; i < 5; i++) {

                cin >> a;

                if (a == 0) {
                    A[0]++;
                }
                else if (a == 1) {
                    A[1]++;
                }
                else  {
                    A[2]++;
                }

            }
            cout << A[0] << ' ' << A[1] << ' ' << A[2] << endl;
            if (A[1] == A[2]) {
                cout << "DRAW" << endl;
            }
            else {
                int max = A[2], ans = 0;
                for (int i = 0; i < 3; i++) {
                    if (max <= A[i]) {
                        max = A[i];
                        ans = i;
                    }
                    cout << "i is:" << i << "  max is:" << max << " ans is: " << ans << endl;
                }

                if (ans == 0) {
                    cout << "DRAW";
                }
                else if (ans == 1) {
                    cout << "INDIA";
                }
                else {
                    cout << "ENGLAND";
                }
                cout << endl;
            }
        }
    }
}
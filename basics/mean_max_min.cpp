#include<iostream>
using namespace std;
int main() {

    int n, sum, mean, max, min, i = 1; //mean can be float
    cin >> n;

    int no;
    cin >> no;
    max = min = sum = no;

    while (i <= n - 1)
    {
        cin >> no;
        sum += no;

        if (no > max)
        {
            max = no;
        }
        if (no < min)
        {
            min = no;
        }

        i += 1;
    }

    cout << "Mean is : " << sum / n << endl << "Maximum is : " << max << endl << "Minimum is : " << min << endl;

    cout << endl;
    return 0;
}
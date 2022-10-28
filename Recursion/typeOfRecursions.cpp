// Types of Recursion calls:

// Parameterised :
/* carry an extra parameter for the result,
keep updating the value of parameter,
provide the result instantly as soon as the base condition is reached,
no need to return to previous function again and again,
stack elimations all at once */

// Functional :
/* repeatedly calling the function,
provide the final result by coming back to the initial function,
need to return to initial function for a final return,
maintaining the stack */


// function of both for the sum upto Nth number

#include<bits/stdc++.h>
using namespace std;

void parameterised(int i, int sum) {
	if (i < 1) {
		cout << sum;
		return;
	}
	parameterised(i - 1, sum + i);
}

int functional(int n) {
	if (n == 1) return 1;

	return n + functional(n - 1);
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	// parameterised(n, 0);
	cout << functional(n);
}
/*

// To find the floor of a number in the array

Floor of a number is the greatest number smaller than or equal to the target number

Example: arr = {2, 3, 5, 9, 14, 16, 18};

if target = 9, then answer will be 9
if target = 15, then answer will be 14
if target = 4, then answer will be 3
if target = 10, then answer will be 9
if target = 12, then answer will be 9
if target = 20, then answer will be 18

what if the target is smaller than the smallest number in the array?
if target = 1, then answer will be nothing... we just return -1


*/





#include<bits/stdc++.h>
using namespace std;


int floorOptimisedLogic(int arr[], int n, int x) {

	if (x < arr[0]) return -1;

	int l = 0;
	int u = n - 1;
	int mid = n / 2;

	while (u >= l) {
		if (arr[mid] == x) {
			return arr[mid];
		}
		else if (arr[mid] < x) {
			l = mid + 1;
		}
		else {
			u = mid - 1;
		}

		mid = (l + u) / 2;
	}

	// the final positions where the loop will terminate will looks like
	// 		upper_bond				target(not exist)				lower_bond

	// 			|							|							|

	// 	element less than				  {null}					element greater than
	// 	the target element 											the target element

	// Hence element present ar upper_bond index is your answer

	return arr[u];
}

int main() {

#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("D:/daydash/input.txt", "r", stdin);
	// for getting input from output.txt
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	int arr[] = {2, 3, 5, 9, 14, 16, 18};
	int n = sizeof(arr) / sizeof(arr[0]);

	int target;
	cin >> target;

	cout << floorOptimisedLogic(arr, n , target);

	cout << endl;
}
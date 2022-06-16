/*

// To find the ceiling of a number in the array

Ceiling of a number is the smallest number greater than or equal to the target number

Example: arr = {2, 3, 5, 9, 14, 16, 18};

if target = 9, then answer will be 9
if target = 15, then answer will be 16
if target = 1, then answer will be 2
if target = 4, then answer will be 5
if target = 10, then answer will be 14
if target = 12, then answer will be 14

what if the target is greater than the greatest number in the array?
if target = 20, then answer will be nothing... we just return -1

*/





#include<bits/stdc++.h>
using namespace std;


int ceilingOptimisedLogic(int arr[], int n, int x) {

	if (x > arr[n - 1]) return -1;

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

	// Hence element present ar lower_bond index is your answer

	return arr[l];
}


int ceiling(int arr[], int n, int x) {
	int l = 0;
	int u = n - 1;
	int mid = n / 2;

	while (u >= l) {
		if (arr[mid] == x) {
			return arr[mid];
		}

		else if (arr[mid] < x) {
			if (arr[mid + 1] >= x && arr[mid] < x) {
				return arr[mid + 1];
			}
			l = mid + 1;
		}

		else if (arr[mid] > x) {
			if (arr[mid - 1] <= x && arr[mid] > x) {
				return arr[mid];
			}
			u = mid - 1;
		}

		mid = (l + u) / 2;
	}
	return -1;
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

	// cout << ceiling(arr, n , target);
	cout << ceilingOptimisedLogic(arr, n , target);

	cout << endl;
}
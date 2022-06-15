#include<bits/stdc++.h>
using namespace std;


int ceilingOptimisedLogic(int arr[], int n, int x) {
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
		else if (arr[mid] > x) {
			u = mid - 1;
		}

		mid = (l + u) / 2;
	}
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
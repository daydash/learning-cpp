// Merit List After Re-Evalutaion

// N K
// M[N]
// while(K){
// 	M[x] <- y		// Modification in marks M[x] to y
// }

// To check that adjacent indices, if (diff_value) count++

// Example :
// Input
// 5 2
// 1 1 2 5 2
// 1 3
// 4 2

// Output
// 5 3

// Explaination
// initial arr = {1,1,2,5,2}
// after arr[1] <- 3
// arr = {1,3,2,5,2}		// No same adj indices have same value, Hence count = 5 as no one is a cheater

// after arr[4] <- 2
// arr = {1,3,2,2,2}		// 3rd, 4th and 5th adj indices have same value, Hence count = 3 (1st, 2nd, 3rd) as 4th and 5th are cheaters


#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	int n, k;
	cin >> n >> k;

	vector<int> v, v2;
	for (int i = 0; i < n; i++) {
		int ele;
		cin >> ele;
		v.push_back(ele);
	}

	for (int i = 0; i < k; i++) {
		int x, y;
		cin >> x >> y;
		v[x - 1] = y;
		int cnt = 1;
		int temp = v.at(0);
		for (int j = 0; j < n; j++) {
			if (temp != v.at(j)) {
				cnt++;
			}
			temp = v.at(j);
		}
		v2.push_back(cnt);
	}

	for (auto element : v2) {
		cout << element << " ";
	}
}
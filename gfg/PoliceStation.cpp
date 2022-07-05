/*
Problem : Police Station
Link : https://practice.geeksforgeeks.org/contest/job-a-thon-exclusive-hiring-challenge-for-amazon-alexa/problems/#

Thief lives in Linear Land where everything exists onasingle-dimensional
axis.
There areNpolice stations in the city.The ith police station is located at
coordinate x[i]. Geek lives at coordinatea.Distance between Geek and
ith police station is given by |a-x[i]|.
Thief wants to choose two distinct police stations such that the sum of the
distance between the first police station and his house,and the distance
between 2nd police station and his house is the maximum possible.
More formally return the maximum value of the expression | a-x[i] | + | a- x[j] |
for two distinct valid indexes i and j.


Sample Test Cases:

// Input 1
N = 2, a = 1
x = {4, 5}

// Output 1
7

//Explaination 1
Only way is to choose first
station at 4 and 2nd station at 5.
so |4 - 1| + |5 - 1| = 3 + 4 = 7

// Input 2
N = 4, a = 2
x = {10, 4, 2, 17}

// Output 2
23

//Explaination 2
Optimal way is to choose 10 and 17
as police station.

*/

#include<bits/stdc++.h>
using namespace std;

int solve(int N, int a, vector<int> x) {
	// code here
	sort(x.begin(), x.end());
	int i = x.size() - 1;
	int j = x.size() - 2;

	int res = max(abs(a - x[i]) + abs(a - x[j]), max(abs(a - x[0]) + abs(a - x[1]), abs(a - x[0]) + abs(a - x[i])));
	// if ( (abs(a - x[i]) + abs(a - x[j])) > (abs(a - x[0]) + abs(a - x[1])) )
	// 	res = (abs(a - x[i]) + abs(a - x[j]));
	// else
	// 	res = (abs(a - x[0]) + abs(a - x[1]));
	return res;

	// int max = x.at(0);
	// int max2 = x.at(1);
	// for (auto v : x) {
	// 	int j = abs(a - v);
	// 	if (j > max) {
	// 		max = j;
	// 		max2 = max;
	// 	}
	// 	if ((j < max) && (j > max2)) {
	// 		max2 = j;
	// 	}
	// }
	// return max + max2;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	int N, a;
	cin >> N >> a;


	vector<int> x;

	for (int i = 0; i < N; i++) {
		int y;
		cin >> y;
		x.push_back(y);
	}

	int res = solve( N, a, x);
	cout << res << endl;
}
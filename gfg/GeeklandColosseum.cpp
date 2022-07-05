/*
Problem : Geekland Colosseum
Link : https://practice.geeksforgeeks.org/contest/job-a-thon-exclusive-hiring-challenge-for-amazon-alexa/problems/#

Sample Test Cases:

// Input 1
N = 2
A[] = {1, 3, 5, 2, 1, 1}

// Output 1
6

//Explaination 1

Fighter 1 and 4 will be removed.
Then S1=(3+5)=8 and S2=(1+1)=2.
s1-s2 = 8-2 = 6.

// Input 2
N = 2
A[] = {1, 1, 5, 3, 7, 7}

// Output 2
-4

//Explaination 2
The best way is to remove Fighter 1 and 5.
S1 - S2 = (1+5) - (3+7) = -4.

*/


/*

	Solution FAILS at

	// Input
	100
	47 46 31 39 64 76 76 30 24 83 74 33 37 7 47 67 100 78 41 17 52 40 48 57 58 3 82 11 40 100 92 10 32 62 76 82 53 61 15 75 9 29 59 88 52 63 31 83 80 70 54 96 9 87 95 78 89 66 37 21 19 3 96 100 30 69 33 18 82 44 61 93 26 3 91 42 67 95 44 68 73 26 9 98 70 67 34 95 26 53 98 25 81 35 18 23 86 50 62 7 97 94 1 16 87 39 65 90 36 70 22 83 68 91 50 61 42 37 73 28 53 39 34 61 28 74 32 35 41 49 100 61 51 14 34 22 17 86 21 74 53 3 11 38 51 33 81 29 83 84 63 53 10 28 91 83 88 83 48 78 42 49 55 40 67 47 8 73 70 90 7 92 23 44 40 71 44 7 65 40 14 80 47 20 30 28 57 12 80 44 46 46 32 32 6 61 23 41 95 31 81 96 79 48 38 35 15 59 83 59 32 75 77 17 2 5 40 66 50 54 91 5 57 57 53 21 70 29 48 46 22 45 43 67 38 11 75 16 57 4 85 57 9 63 3 3 27 62 1 68 86 10 21 88 89 58 41 94 55 31 69 10 44 11 6 59 91 57 72 75 47 1 84 48 50 91 1 13 5 89 55 16 29 10 12 25 71 18 45 99 21 32 87 6 70 6 72 94 38 40

	// Expected Output
	3974

	// My Output
	3799

*/
#include<bits/stdc++.h>
using namespace std;

long long colosseum(int N, vector<int> A) {

	vector<int> S1(A.begin(), A.begin() + (A.size() / 2));
	sort(S1.begin(), S1.end());
	long long s1 = 0;
	int x = S1.size() - 1;
	for (int i = 0; i < N; i++) {
		s1 += S1.at(x - i);
	}

	// long long s1 = S1.at(S1.size() - 1) + S1.at(S1.size() - 2);

	vector<int> S2(A.begin() + (A.size() / 2 + 1), A.end());
	sort(S2.begin(), S2.end());
	long long s2 = 0;
	for (int i = 0; i < N; i++) {
		s2 += S2.at(i);
	}

	// long long s2 = S2.at(0) + S2.at(1);

	return s1 - s2;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	int N;
	cin >> N;


	vector<int> x;

	for (int i = 0; i < 3 * N; i++) {
		int y;
		cin >> y;
		x.push_back(y);
	}

	int res = colosseum(N, x);
	cout << res << endl;
}
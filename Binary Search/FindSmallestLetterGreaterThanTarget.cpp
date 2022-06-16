/*

744. Find Smallest Letter Greater Than Target

Given a characters array letters that is sorted in non-decreasing order and a character target, return the smallest character in the array that is larger than target.

Note that the letters wrap around.
For example, if target == 'z' and letters == ['a', 'b'], the answer is 'a'.

link - https://leetcode.com/problems/find-smallest-letter-greater-than-target/

*/

// For understanding checkout:
// https://github.com/daydash/learning-cpp/blob/master/Binary%20Search/CeilingOfANumber.cpp


// My Solution... 18 ms / 16 MB ... (if remove n and use letters.size() directly)... 21 ms / 15.9 MB
class Solution {
public:
	char nextGreatestLetter(vector<char>& letters, char target) {

		int n = letters.size();

		if (target >= letters.at(n - 1) ) {
			return letters.at(0);
		}

		int l = 0;
		int u = n - 1;
		int mid = n / 2;

		while (u >= l) {
			if (letters.at(mid) == target) {
				// return letters.at(mid+1);
				l = mid + 1;
			}
			else if (letters.at(mid) < target) {
				l = mid + 1;
			}
			else {
				u = mid - 1;
			}
			mid = (l + u) / 2;
		}
		return letters.at(l);
	}
};

// Kunal's Solution... 25 ms / 15.9 MB
class Solution {
public:
	char nextGreatestLetter(vector<char>& letters, char target) {

		int l = 0;
		int u = letters.size() - 1;


		while (l <= u) {
			int mid = l + (u - l) / 2;

			if (target < letters.at(mid)) {
				u = mid - 1;
			}
			else {
				l = mid + 1;
			}
		}
		return letters.at(l % letters.size());
	}
};
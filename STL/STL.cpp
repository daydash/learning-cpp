// This file contains the code that I (daydash) edited and test for my own purpose.


#include <bits/stdc++.h>
// #include <iterator>
// #include<array>

using namespace std;

namespace yash {
int val = 50;
int getVal() {
	return val * 10;
}
}


struct node {
	string str;
	int num;
	double doub;
	char x;

	// *node(str_, num_, doub_, x_) {
	// 	str = str_;
	// 	num = num_;
	// 	doub = doub_;
	// 	x = x_;
	// }

};




// array<int, 3> ARR; // -> {0, 0, 0}

// max size of 10^7 -> int, double, char
// int Arr[10000000];

// max size of 10^8 -> bool
// bool B[100000000];


int main() {

#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for getting input from output.txt
	freopen("output.txt", "w", stdout);
#endif
	// start the code here

	double val = 10.0;
	cout << val << endl;
	cout << yash::val << endl;
	cout << yash::getVal() << endl;

	// max size of 10^6 -> int, double, char
	// int Ai[1000000];


	// max size of 10^7 -> bool
	// bool Bi[10000000];


	// wrong way of defining
	node raj;
	raj.str = "striver";
	raj.num = 79;
	raj.doub = 91.0;

	// node *raj = new node("striver", 79, 91.0, '');
	// node raj = node("striver", 79, 91.0, "");



	// array<int, 3> A; // -> {?, ?, ?}


	// array<int, 5> arr = {1}; // -> {1, 0, 0, 0, 0}


	// int arr[10000] = {0};

	// A.at(index);


	// iterators
	// begin(), end(), rbegin(), rend()


	// begin - 0th index
	// rbegin - last index

	// end - after the last index
	// rend - before the 0th index



	array<int, 5> arr = {1, 3, 4, 5, 6};
	for (auto it = arr.begin(); it != arr.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	for (auto it = arr.rbegin(); it != arr.rend(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	for (auto it = arr.end() - 1; it >= arr.begin(); it--) {
		cout << *it << " ";
	}
	cout << endl;


	array<int, 5> myarray = { 2, 16, 77, 34, 50 };
	myarray.fill(5);  // -> {5, 5, 5, 5, 5}

	cout << "myarray contains:";
	for ( auto it = myarray.begin(); it != myarray.end(); ++it )
		cout << ' ' << *it;
	cout << '\n';



	// for each loop
	for (auto it : arr) {
		cout << it << " ";
	}

	cout << endl;

	string s = "xhegcwe";
	// x h e g c w e
	for (auto c : s) {
		cout << c << " ";
	}

	cout << endl;


	// size
	cout << arr.size() << endl; // arr = {1, 3, 4, 5, 6}; -> size = 5

	// front
	cout << arr.front() << endl; // arr.at(0);

	// back
	cout << arr.back() << endl; // arr.at(arr.size() - 1);






// VECTOR


	// Works similiar to as array
	// int arr[50];

	// segmentation fault if you push_back 10^7 times


	cout << endl << "Vectors: " << endl;

	vector<int> vec; // -> {}
	cout << vec.size() << endl; // -> print 0
	cout << vec.capacity() << endl; // -> print 0
	vec.push_back(0); // {0}
	vec.push_back(2); // {0,2}
	cout << vec.size() << endl; // -> print 2
	cout << vec.capacity() << endl; // -> print 2
	vec.pop_back(); // {0}
	cout << vec.size() << endl; // print 1

	vec.push_back(0); // {0,0}
	vec.push_back(2); // {0,0,2}
	cout << vec.size() << endl; // -> print 3
	cout << vec.capacity() << endl; // -> print 4


	vec.clear(); // --> erase all elements at once {}

	cout << "vec is: ";
	for (auto v : vec) {
		cout << v << " ";
	}
	cout << endl;


	vec.push_back(0); // {0}
	vec.push_back(1); // {0,1}
	vec.push_back(2); // {0,1,2}
	vec.push_back(3); // {0,1,2,3}

	cout << "vec is: ";
	for (auto v : vec) {
		cout << v << " ";
	}
	cout << endl;



	// Another way to print
	cout << "vec is: ";
	for (int i = 0; i < vec.size(); i++) {
		cout << vec.at(i) << " ";
	}
	cout << endl;




	vector<int> vec1(4, 0); // -> {0,0,0,0}

	cout << "vec1 is: ";
	for (auto v1 : vec1) {
		cout << v1 << " ";
	}
	cout << endl;

	vector<int> vec2(4, 10); // -> {10,10,10,10}



	// copy the entire vec2 into vec3


	vector<int> vec3(vec2.begin(), vec2.end()); // -> [)

	// vector<int> vec3(vec2);

	cout << "vec3 is: ";
	for (auto v3 : vec3) {
		cout << v3 << " ";
	}
	cout << endl;


	// swap swap(v1, v2)

	cout << endl << "Swap vectors" << endl;
	swap(vec1, vec3);

	cout << "vec1 is: ";
	for (auto v1 : vec1) {
		cout << v1 << " ";
	}
	cout << endl;

	cout << "vec3 is: ";
	for (auto v3 : vec3) {
		cout << v3 << " ";
	}
	cout << endl;


	cout << endl;

	vector<int> yash;
	yash.push_back(1); // yash.emplace_back(1); // emplace_back takes lesser time than push back
	yash.push_back(3);
	yash.push_back(2);
	yash.push_back(5); // -> {1, 3, 2, 5}


	cout << "yash is: ";
	for (auto y : yash) {
		cout << y << " ";
	}
	cout << endl;

	vector<int> yash1(yash.begin(), yash.begin() + 2);  // -> {1, 3}

	// vector<int> yash1(yash.begin() + 2, yash.end()); // -> {2, 5}

	cout << "yash is: ";
	for (auto y1 : yash1) {
		cout << y1 << " ";
	}
	cout << endl;


	// lower bound , upper bound

	// swap swap(v1, v2)
	// begin(), end(), rbegin(), rend()




	// 2D VECTORS

	// to defining 2d vectors

	vector<vector<int>> vec2d;

	vector<int> raj1;
	raj1.push_back(1);
	raj1.push_back(2);

	vector<int> raj2;
	raj2.push_back(10);
	raj2.push_back(20);

	vector<int> raj3;
	raj3.push_back(19);
	raj3.push_back(24);
	raj3.push_back(27);

	vec2d.push_back(raj1);
	vec2d.push_back(raj2);
	vec2d.push_back(raj3);

	// it is vector itself
	// printing 2d vector

	cout << endl << "2D vector is: " << endl;

	for (auto vctr : vec2d) {
		for (auto it : vctr) {
			cout << it << " ";
		}
		cout << endl;
	}
	cout << endl;


	// Another way to print
	for (int i = 0; i < vec2d.size(); i++) {
		for (int j = 0; j < vec2d[i].size(); j++) {
			cout <<  vec2d[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;




	// define 10 x 20
	vector<vector<int>> vec_(10, vector<int> (20, 0));
	cout << vec_.size() << endl; // 10 prints


	vec_.push_back(vector<int>(20, 0)); // pushed one more element (vector) in the 2d vector - vec_
	cout << vec_.size() << endl; // 11 prints


	cout << endl << "vec_ 11*20 : " << endl;

	for (auto vctr_ : vec_) {
		for (auto it_ : vctr_) {
			cout << it_ << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << endl;


	vec_[2].push_back(1);

	vec_[3].pop_back();
	vec_[3].pop_back();
	vec_[3].pop_back();
	vec_[3].pop_back();
	vec_[3].pop_back();
	vec_[3].pop_back();
	vec_[3].pop_back();
	vec_[3].pop_back();


	for (auto vctr_ : vec_) {
		for (auto it_ : vctr_) {
			cout << it_ << " ";
		}
		cout << endl;
	}
	cout << endl;


	// vector<int> arr[4];
	// arr[1].push_back(0);


	// 10 x 20 x 30 // int arr[10][20][30]
	vector<vector<vector<int>>> vec3d(10, vector<vector<int>> (20, vector<int> (30, 0)));




	cout << endl << endl << "FINISHED" << endl;;


	return 0;
}
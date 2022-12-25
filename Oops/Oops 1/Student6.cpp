#include <iostream>
using namespace std;
#include "StudentClass.cpp"


int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	Student s1; // Constructor 1 called
	Student s2(101); // Constructor 2 called
	Student s3(20, 102); // Constructor 3 called
	Student s4(s3); // Copy constructor
	s1 = s2; // Copy assignment operator
	Student s5 = s4; // Copy constructor

	s5.display();

}


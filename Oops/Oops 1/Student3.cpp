#include <iostream>
using namespace std;
#include "StudentClass.cpp"

int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	Student s1;

	Student *s2 = new Student;

	s1.setAge(20, 123);
	s2 -> setAge(24, 000);

	s1.display();
	s2 -> display();


}


#include <iostream>
using namespace std;
#include <cstring>

class Student {
public :
	char *name;
	int rollNo;

	// Constructor 1
	Student(int num) {
		rollNo = num;
		name = new char[10];
		strcpy(name, "abc");
	}

	// Constructor 2
	Student(int num, char *str) {
		rollNo = num;
		name = new char[strlen(str) + 1];
		strcpy(name, str);
	}

	void print() {
		cout << name << " "  <<  rollNo << " ";
	}
};

int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	Student s1(101);
	s1.print();
	Student *s2 = new Student(150, "xyz");
	s2 -> print();
}
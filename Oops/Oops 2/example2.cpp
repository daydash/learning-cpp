
#include <iostream>
using namespace std;

class Student {
public :
	char *name;
	int rollNo;

	void print() {
		cout << name << " "  <<  rollNo << " ";
	}
};

int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	char name[] = "Misha";
	Student s1;
	s1.name = name;
	s1.rollNo = 101;

	name[0] = 'N';
	Student s2;
	s2.name = name;
	s2.rollNo = 102;

	s1.print();
	s2.print();
}


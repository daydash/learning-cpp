#include<bits/stdc++.h>
using namespace std;



class Student {
    int rollNumber;

public :

    int age;

    Student(int r) {
        rollNumber = r;
    }

    int getRollNumber() const {
        return rollNumber;
    }

};


int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/daydash/input.txt", "r", stdin);
    freopen("D:/daydash/output.txt", "w", stdout);
#endif
    Student s1(1081);
    s1.age = 20;

    Student const s2 = s1;
    cout << s2.getRollNumber();
}

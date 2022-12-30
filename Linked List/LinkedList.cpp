#include<bits/stdc++.h>
using namespace std;
#include "LinkedListClass.cpp"

int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	// Statically
	Node n1(1);
	Node *head = &n1;

	Node n2(2);
	n1.next = &n2;

	cout << n1.data << " " << n2.data << endl;
	cout << n1.next << " " << n2.next << endl;

	// Dynamically
	Node *n3 = new Node(10);
	// n2.next = n3;
	// If n3 is the first node then
	Node *head2 = n3;

	Node *n4 = new Node(20);
	n3 -> next = n4;

	cout << n3 -> data << " " << n4 -> data << endl;
	cout << n3 -> next << " " << n4 -> next << endl;

}
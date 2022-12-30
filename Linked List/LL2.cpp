#include<bits/stdc++.h>
using namespace std;
#include "LinkedListClass.cpp"

void print(Node *head) {
	// while (head -> next != NULL) {
	while (head != NULL) {
		cout << head -> data << endl;
		head = head -> next;
	}

	/*
	// This will not work as head is already NULL
	while (head != NULL) {
		cout << head -> data << endl;
		head = head -> next;
	}

	// We can use a Node *temp var in the begining of this print(),
	// then use that temp var as the head in the next loop
	*/

}

void printD(Node *head) {
	while (head != NULL) {
		cout << head -> data << " ";
		head = head -> next;

	}
	cout << endl;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	// Dynamically
	Node *n1 = new Node(1);
	Node *n2 = new Node(2);
	Node *n3 = new Node(3);
	Node *n4 = new Node(4);
	Node *n5 = new Node(5);

	Node *head = n1;

	n1 -> next = n2;
	n2 -> next = n3;
	n3 -> next = n4;
	n4 -> next = n5;

	// printD(head);
	printD(n1);

	/*
		// Statically
		Node n1(1);
		Node *head = &n1;

		Node n2(2);
		Node n3(3);
		Node n4(4);
		Node n5(5);

		n1.next = &n2;
		n2.next = &n3;
		n3.next = &n4;
		n4.next = &n5;

		//passing the value of head so there will be not change in the (main)head
		print(head);
		// print(head);
	*/
}
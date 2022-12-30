#include<bits/stdc++.h>
using namespace std;
#include "LinkedListClass.cpp"

void print(Node *head) {
	Node *temp = head;

	while (temp != NULL) {
		cout << temp -> data << " ";
		temp = temp -> next;
	}
	cout << endl;
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	/*
	Node *node1 = new Node(10);
	Node *node2 = new Node(20);

	// made the node2 as head...
	// node2 -> node1
	node2 -> next = node1;
	print(node2);
	*/

	Node *node1 = new Node(10);
	Node *node2 = new Node(20);
	Node *node3 = new Node(30);
	Node *node4 = new Node(40);
	node1 -> next = node2;
	node2 -> next = node3;
	node3 -> next = node4;

	// passing node2 as head...
	// node2 -> node3 -> node4
	print(node2);


}
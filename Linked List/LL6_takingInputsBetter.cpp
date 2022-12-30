#include<bits/stdc++.h>
using namespace std;
#include "LinkedListClass.cpp"

// time complexity will be O(n)
Node* takeInput() {
	int data;
	cin >> data;
	Node *head = NULL;
	Node *tail = NULL;
	while (data != -1) {
		Node *newNode = new Node(data);
		if (head == NULL) {
			head = newNode;
			tail = newNode;
		}
		else {
			/*
				Node *temp = head;
				while (temp -> next != NULL) {
					temp = temp -> next;
				}
				temp -> next = newNode;
			*/
			tail -> next = newNode;
			tail = tail -> next; // tail = newNode;
		}
		cin >> data;
	}
	return head;
}

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

	Node *head = takeInput();
	print(head);

	return 0;
}
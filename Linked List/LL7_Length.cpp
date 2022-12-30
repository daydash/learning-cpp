#include<bits/stdc++.h>
using namespace std;
#include "LinkedListClass.cpp"

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

int lengthLL(Node *head) {
	int length = 0;
	while (head != NULL) {
		length++;
		head = head -> next;
	}
	return length;
}

int lengthLL2(Node *head) {
	int length = 1;
	while (head -> next != NULL) {
		length++;
		head = head -> next;
	}
	return length;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif


	Node *head = takeInput();
	// print(head);
	cout << lengthLL(head) << " " << lengthLL2(head) << endl;


	return 0;
}
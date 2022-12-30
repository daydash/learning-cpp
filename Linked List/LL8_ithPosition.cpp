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

	while (head != NULL) {
		cout << head -> data << " ";
		head = head -> next;
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

// Given a linked list and a position i, print the node at ith position.
// If position i is greater than length of LL, then don't print anything.
void findElement(Node *head, int pos) {
	int length = lengthLL(head);
	if (pos >= length) return;

	while (pos--) {
		head = head -> next;
	}
	cout << head -> data << " ";
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	int t;
	cin >> t;

	while (t--) {
		Node *head = takeInput();
		int pos;
		cin >> pos;

		findElement(head, pos);
		cout << "done" << endl;
	}

	return 0;
}

// Input
/*
5
10 20 30 40 50 -1
5
3 4 5 2 6 1 9 -1
3
18 -1
0
41 83 13 63 93 44 48 97 100 82 -1
10
55 73 99 80 92 14 61 5 19 22 15 8 70 63 79 57 79 43 41 72 -1
9
*/

// Output
/*
done
2 done
18 done
done
22 done
*/
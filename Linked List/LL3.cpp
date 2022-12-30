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

void increment(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        temp -> data++;
        temp = temp -> next;
    }
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("D:/daydash/input.txt", "r", stdin);
    freopen("D:/daydash/output.txt", "w", stdout);
#endif

    Node *n1 = new Node(10);
    Node *n2 = new Node(20);
    n1 -> next = n2;
    increment(n1);
    print(n1);
}

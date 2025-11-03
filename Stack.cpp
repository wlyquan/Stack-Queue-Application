#include "Stack.h"
#include <iostream>
using namespace std;

void Stack::push(int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    if (!tail) tail = newNode;
    cout << "Pushed: " << val << endl;
}

void Stack::pop() {
    if (isEmpty()) {
        cout << "Stack is empty!\n";
        return;
    }
    Node* temp = head;
    cout << "Popped: " << temp->data << endl;
    head = head->next;
    delete temp;
    if (!head) tail = nullptr;
}

void Stack::display() {
    if (isEmpty()) {
        cout << "Stack is empty.\n";
        return;
    }

    cout << "Stack (Top to Bottom): ";
    Iterator it(head);
    while (it.hasNext()) {
        cout << it.next() << " ";
    }
    cout << endl;
}

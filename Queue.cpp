#include "Queue.h"
#include <iostream>
using namespace std;

void Queue::enqueue(int val) {
    Node* newNode = new Node(val);
    if (isEmpty()) head = tail = newNode;
    else {
        tail->next = newNode;
        tail = newNode;
    }
    cout << "Enqueued: " << val << endl;
}

void Queue::dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty!\n";
        return;
    }
    Node* temp = head;
    cout << "Dequeued: " << temp->data << endl;
    head = head->next;
    delete temp;
    if (!head) tail = nullptr;
}

void Queue::display() {
    if (isEmpty()) {
        cout << "Queue is empty.\n";
        return;
    }

    cout << "Queue (Front to Back): ";
    Iterator it(head);
    while (it.hasNext()) {
        cout << it.next() << " ";
    }
    cout << endl;
}

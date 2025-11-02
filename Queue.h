#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include "linkedList.h"
using namespace std;

class Queue : public LinkedList {
public:
  
    void enqueue(int val) {
        Node* newNode = new Node(val);
        if (isEmpty()) {
            head = tail = newNode; 
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        cout << "Enqueued: " << val << endl;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty!\n";
            return;
        }
        Node* temp = head;
        cout << "Dequeued: " << temp->data << endl;
        head = head->next;
        if (!head) { // If list is now empty, update tail
            tail = nullptr;
        }
        delete temp;
    }

    void display() override {
        Node* temp = head;
        cout << "Queue (Front to Back): ";
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

#endif

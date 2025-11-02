//stack.h
#include <iostream>
#include <queue>
#include <string>
#include "linkedList.h"

#ifndef STACK_H
#define STACK_H
using namespace std;
class Stack : public LinkedList {
	
	public:
		void push(int val) {
			Node* newNode = new Node(val);
			newNode->next = head;
			head = newNode;
			if (!tail) tail = newNode;
			cout << "Pushed: " << val << endl;
		}
		
		void pop() {
			if(isEmpty()) {
				cout << "Stack is empty\n";
				return;
			}
			Node* temp = head;
			cout << "Popped: " << temp->data << endl;
			head = head->next;
			delete temp;
			if (!head) tail = nullptr;
		}

void display() override{
	Node* temp = head;
	cout << "The stack is: ";
	while (temp) {
		cout << temp->data << "";
		temp = temp->next;
	}
	cout << endl;
};
		
#endif

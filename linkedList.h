//linkedList.h

#include <iostream>
#include <string>
using namespace std;

//Node structure for linked list
struct Node {
	int data;
	Node* next;
	
	Node(int val) : data(val), next(nullptr) {} //default contructor
};

//linked list class
class LinkedList {
	protected:
		Node* head;
		Node* tail;
		
	public:
		LinkedList() : head(nullptr), tail(nullptr) {}
		
		virtual void display() = 0; //pure virtual function
};

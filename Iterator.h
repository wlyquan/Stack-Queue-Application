#ifndef ITERATOR_H
#define ITERATOR_H

#include "Node.h"
#include <stdexcept>

// Iterator class to traverse a linked list
class Iterator {
private:
    Node* current;  // Pointer to the current node in the list

public:
    // Constructor: start from a given node
    Iterator(Node* start) : current(start) {}

    // Check if another element exists
    bool hasNext() const {
        return current != nullptr;
    }

    // Return the current element and move to the next node
    int next() {
        if (!current)
            throw std::out_of_range("No more elements in the list.");
        int value = current->data;
        current = current->next;
        return value;
    }
};

#endif

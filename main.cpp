#include <iostream>
#include "Stack.h"
#include "Queue.h"
using namespace std;

int main() {
    Stack stack;
    Queue queue;
    int choice, val;

    do {
        cout << "\n========== MENU ==========\n";
        cout << "1. Push to Stack\n";
        cout << "2. Pop from Stack\n";
        cout << "3. Enqueue to Queue\n";
        cout << "4. Dequeue from Queue\n";
        cout << "5. Display Stack\n";
        cout << "6. Display Queue\n";
        cout << "7. Exit\n";
        cout << "===========================\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> val;
                stack.push(val);
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                cout << "Enter value: ";
                cin >> val;
                queue.enqueue(val);
                break;
            case 4:
                queue.dequeue();
                break;
            case 5:
                stack.display();
                break;
            case 6:
                queue.display();
                break;
            case 7:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 7);

    return 0;
}

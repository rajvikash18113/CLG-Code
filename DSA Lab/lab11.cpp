/*
AIM -  Write a program to implement push and pop operations on a stack using linked list
*/

#include <bits/stdc++.h>
using namespace std;

// Declare linked list node
struct Node {
    int data;
    struct Node* link;
};

// Initialize the top of the stack
struct Node* top = NULL;

// Utility function to add an element to the stack
void push(int data) {
    // Create new node temp and allocate memory
    struct Node* temp = new Node();

    // Check if stack (heap) is full
    if (!temp) {
        cout << "\nHeap Overflow";
        exit(1);
    }

    // Initialize data into temp's data field
    temp->data = data;

    // Put top pointer reference into temp's link
    temp->link = top;

    // Make temp the new top of the stack
    top = temp;
}

// Utility function to remove an element from the stack
void pop() {
    struct Node* temp;

    // Check for stack underflow
    if (top == NULL) {
        cout << "\nStack Underflow" << endl;
        exit(1);
    }
    else {
        // Assign top to temp
        temp = top;

        // Move the top to the next node
        top = top->link;

        // Destroy the connection between the first and second nodes
        temp->link = NULL;

        // Release memory of the top node
        free(temp);
    }
}

// Utility function to display stack elements
void display() {
    struct Node* temp;

    // Check for stack underflow
    if (top == NULL) {
        cout << "\nStack Underflow";
        exit(1);
    }
    else {
        temp = top;
        while (temp != NULL) {
            // Print node data
            cout << temp->data << " ";
            // Move to the next node
            temp = temp->link;
        }
        cout << endl;
    }
}

int main() {
    // Push elements onto the stack
    push(11);
    push(22);
    push(33);
    push(44);
    push(55);
    push(66);

    cout << "\nStack elements after PUSH operation: ";
    display();

    // Pop elements from the stack
    pop();
    pop();

    cout << "\nStack elements after POP operation: ";
    display();

    return 0;
}

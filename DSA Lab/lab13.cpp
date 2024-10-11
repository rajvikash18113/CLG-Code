/*
   WAP to program for enqueue and dequeue using linked list.
*/

#include <iostream>  // Including the input-output stream library
using namespace std; // Using the standard namespace

// Node structure for the queue
struct QNode
{
    int data;    // Variable to store data
    QNode *next; // Pointer to the next node in the queue

    // Constructor to initialize a new node with data
    QNode(int d)
    {
        data = d;    // Assign data to the node
        next = NULL; // Set next pointer to NULL
    }
};

// Queue structure with front and rear pointers
struct Queue
{
    QNode *front, *rear; // Pointers for the front and rear of the queue

    // Constructor to initialize an empty queue
    Queue()
    {
        front = rear = NULL; // Set both front and rear pointers to NULL
    }

    // Function to add an element to the queue (Enqueue operation)
    void enQueue(int x)
    {
        QNode *temp = new QNode(x); // Create a new node with given data

        // If the queue is empty, set both front and rear to the new node
        if (rear == NULL)
        {
            front = rear = temp; // Assign the new node to both front and rear
            return;              // Exit the function
        }

        // If queue is not empty, link the new node at the end of the queue
        rear->next = temp; // Set the next of rear to the new node
        rear = temp;       // Move the rear pointer to the new node
    }

    // Function to remove an element from the queue (Dequeue operation)
    void deQueue()
    {
        // If the queue is empty, return and do nothing
        if (front == NULL)
            return; // Exit the function

        // Store the current front node in a temporary pointer
        QNode *temp = front; // Store the front node to free its memory later

        // Move the front pointer to the next node
        front = front->next; // Advance front to the next node

        // If front becomes NULL, it means the queue is now empty
        if (front == NULL)
            rear = NULL; // Set rear to NULL as well

        // Delete the old front node
        delete temp; // Free the memory of the removed node
    }
};

// Main function to demonstrate Enqueue and Dequeue operations
int main()
{
    Queue q; // Create an empty queue

    q.enQueue(10);  // Enqueue 10 to the queue
    q.enQueue(20); // Enqueue 20 to the queue

    q.deQueue();  // Dequeue (remove) an element from the queue
    q.deQueue(); // Dequeue another element from the queue

    q.enQueue(30);   // Enqueue 30 to the queue
    q.enQueue(40);  // Enqueue 40 to the queue
    q.enQueue(50); // Enqueue 50 to the queue

    q.deQueue(); // Dequeue an element from the queue

    // Check if the front pointer is not NULL and print the front data
    if (q.front != NULL)
        cout << "Queue Front : " << (q.front)->data << endl; // Display the front element
    else
        cout << "Queue Front is NULL" << endl; // Display message if queue is empty

    // Check if the rear pointer is not NULL and print the rear data
    if (q.rear != NULL)
        cout << "Queue Rear : " << (q.rear)->data << endl; // Display the rear element
    else
        cout << "Queue Rear is NULL" << endl; // Display message if queue is empty

    return 0; // Return 0 to indicate successful execution
}

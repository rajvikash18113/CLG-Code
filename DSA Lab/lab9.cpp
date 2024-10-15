// AIM - WAP to implement insertion and deletion operations in a queue using linear array.

#include <iostream>
using namespace std;

int queue[20], n, front = -1, rear = -1;

void Insert(int val)
{
    if (rear == n - 1)
        cout << "Queue Overflow" << endl;
    else
    {
        if (front == -1)
            front = 0;
        rear++;
        queue[rear] = val;
    }
}

void Delete()
{
    if (front == -1 || front > rear)
    {
        cout << "\nQueue is empty\n";
        return;
    }
    else
    {
        cout << "Deleted element: " << queue[front] << endl;
        front++;
    }
}

void Display()
{
    if (front == -1 || front > rear)
    {
        cout << "\nQueue is Empty\n";
        return;
    }
    cout << "Queue elements are: ";
    for (int i = front; i <= rear; i++)
    {
        cout << queue[i] << "\t";
    }
    cout << endl;
}

int main(void)
{
    cout << "\nEnter size of queue: ";
    cin >> n;

    // Print initial Queue elements (it will be empty at this point)
    Display();

    // Inserting elements in the queue
    Insert(20);
    Insert(30);
    Insert(40);
    Insert(50);

    cout << "\nAfter insertion, queue = \n";
    // Print Queue elements after insertion
    Display();

    // Try to insert another element to check overflow
    Insert(60);

    // Print Queue elements after insertion
    Display();

    // Deleting elements from the queue
    Delete();
    Delete();

    cout << "\nAfter deletion of 2 nodes, queue = \n";
    // Print Queue elements after deletion
    Display();

    return 0;
}

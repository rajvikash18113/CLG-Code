/*
AIM - Write a menu driven program to perform following insertion.
operations in a single linked list:
i. Insertion at beginning
ii. Insertion at end
iii. Insertion after a given node
iv. Traversing a linked list
*/

#include <iostream>
using namespace std;

// Creating Node
struct node
{
    int data;
    node *next;
};

// Linked list class
class list
{
private:
    node *head, *tail;

public:
    list()
    {
        head = NULL;
        tail = NULL;
    }

    // function to create new node at the end or tail
    void create_node(int value)
    {
        node *temp = new node;
        temp->data = value;
        temp->next = NULL;

        if (head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }

    // Function to display the nodes of the linked list
    void display()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "\t";
            temp = temp->next;
        }
        cout << endl;
    }

    // Function to insert a node at the start
    void insert_start(int value)
    {
        node *temp = new node;
        temp->data = value;
        temp->next = head;
        head = temp;

        // If the list was empty, update the tail as well
        if (tail == NULL)
        {
            tail = head;
        }
    }

    // Function to insert a node at a specific position
    void insert_position(int pos, int value)
    {
        node *temp = new node;
        temp->data = value;

        // Insert at the head if the position is 1
        if (pos == 1)
        {
            temp->next = head;
            head = temp;
            return;
        }

        node *pre = head;
        // Traverse to the node just before the desired position
        for (int i = 1; i < pos - 1; i++)
        {
            pre = pre->next;
            // If we reach the end before the desired position, stop
            if (pre == NULL)
            {
                cout << "Position out of range!" << endl;
                return;
            }
        }

        // Link the new node
        temp->next = pre->next;
        pre->next = temp;

        // If inserting at the end, update the tail pointer
        if (temp->next == NULL)
        {
            tail = temp;
        }
    }
};

int main()
{
    list obj;

    // Creating nodes
    obj.create_node(25);
    obj.create_node(50);
    obj.create_node(90);
    obj.create_node(40);

    cout << "\n ---------------Traversing Linked List-------------- " << endl;
    obj.display();

    cout << "\n -----------------Inserting At End ------------------ " << endl;
    obj.create_node(55);
    obj.display();

    cout << "\n ----------------Inserting At Start------------------ " << endl;
    obj.insert_start(50);
    obj.display();

    cout << "\n -------------Inserting At Particular Position--------- " << endl;
    obj.insert_position(5, 60);
    obj.display();

    return 0;
}
// jgh
/*
 AIM -Write a menu driven program to perform following deletion operations
in a single linked list:
i. Deletion at beginning
ii. Deletion at end
iii. Deletion after a given node
*/

#include <iostream>
using namespace std;

// Create Struct Node
struct node
{
    int data;
    node *next;
};

// Linked List class
class list
{
private:
    node *head; // data of the node
    node *tail; // pointer of the node

public:
    // Constructor to initialize head and tail pointers
    list()
    {
        head = NULL; // Initialise Head to NULL that means (Empty List)
        tail = NULL; // Initialise tail to NULL
    }

    // Function to create a new node and add it to the end of the list
    void createnode(int value)
    {
        node *temp = new node; // Allocate a new node
        temp->data = value;    // Set the node Value
        temp->next = NULL;     // Set the Next pointer to NULL

        // If the list is empty, initialize both head and tail
        if (head == NULL)
        { // If the list is empty, set head and tail to the new node
            head = temp;
            tail = temp;
        }
        else
        {
            // Attach the new node to the end and update the tail
            tail->next = temp; // Attach new node to the end
            tail = temp;       // Update the tail pointer
        }
    }

    // Function to display all nodes in the list
    void display()
    {
        node *temp = head; // Start from the head Node
        while (temp != NULL)
        {                               // Transverse the list until th end
            cout << temp->data << "\t"; // Print each node data
            temp = temp->next;          // Move to the next node
        }
        cout << endl; // Print newline at the end
    }

    // Function to delete the first node in the list
    void delete_first()
    {
        if (head == NULL)
        {
            cout << "List is empty!" << endl;
            return;
        }
        node *temp = head; // Store the head node
        head = head->next; // Move the head to the next node
        delete temp;       // Delete the old head node
    }

    // Function to delete the last node in the list
    void delete_last()
    {
        if (head == NULL)
        {
            cout << "List is empty!" << endl;
            return;
        }

        node *current = head;
        node *previous = NULL;

        // Traverse to the end of the list
        while (current->next != NULL)
        {
            previous = current;
            current = current->next;
        }

        // If there's only one node in the list
        if (previous == NULL)
        {
            head = NULL;
            tail = NULL;
        }
        else
        {
            previous->next = NULL; // Set the second last node's next to NULL
            tail = previous;       // Update the tail pointer
        }
        delete current; // Delete the last node
    }

    // Function to delete a node at a given position
    void delete_position(int pos)
    {
        if (head == NULL)
        {
            cout << "List is empty!" << endl;
            return;
        }

        node *current = head;
        node *previous = NULL;

        // If the position is 1, delete the first node
        // if (pos == 1)
        // {
        //     head = head->next;
        //     delete current;
        //     return;
        // }

        // Traverse to the node at the specified position
        for (int i = 1; i < pos; i++)
        {
            previous = current;
            current = current->next;

            // If position is greater than the number of nodes
            if (current == NULL)
            {
                cout << "Position out of range!" << endl;
                return;
            }
        }

        // Remove the node and connect previous node to next node
        previous->next = current->next;
        delete current; // Delete the node at the given position
    }
};

int main()
{
    list obj;

    // Create nodes
    obj.createnode(25);
    obj.createnode(50);
    obj.createnode(90);
    obj.createnode(40);
    obj.createnode(60);
    obj.createnode(70);
    obj.createnode(30);
    obj.createnode(80);
    obj.createnode(10);

    // Display nodes
    cout << "\n------------Displaying All Nodes------------\n";
    obj.display();

    // Delete first node
    cout << "\n-----------Deleting At Start----------------\n";
    obj.delete_first();
    obj.display();

    // Delete last node
    cout << "\n-------------Deletion At End----------------\n";
    obj.delete_last();
    obj.display();

    // Delete node at position 4
    cout << "\n--------Deletion After a Particular Node (Position 4)--------\n";
    obj.delete_position(4);
    obj.display();

    return 0;
}



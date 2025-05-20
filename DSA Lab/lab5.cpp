/*Write a program to implement push and pop operations on a stack using linear
  array*/

#include <iostream>
using namespace std;

class STACKS
{
private:
    int stack[10];
    const int MAX = 10; // Constant for maximum size
    int top;

public:
    STACKS() : top(-1) {} // Constructor to initialize top

    void push(int val)
    {
        if (top >= MAX - 1)
        {
            cout << "Stack is full\n";
            return;
        }
        stack[++top] = val; // Increment top and then push
        cout << val << " pushed into stack!\n";
    }

    int pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow\n";
            return -1;
        }
        cout << "Element popped: " << stack[top] << "\n";
        return stack[top--]; // Return element and then decrement top
    }
};

int main()
{
    STACKS st;

    st.push(3);
    st.push(4);
    st.push(5);

    st.pop();
    st.pop();
    st.pop();

    return 0;
}
// done
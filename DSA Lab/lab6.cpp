// Write a program to convert an infix expression to a postfix expression using stacks.

#include <iostream>
#include <stack>
using namespace std;

// Function to check precedence of operators
int precedence(char op)
{
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    if (op == '^')
        return 3;
    return 0;
}

// Function to convert infix to postfix
void Postfix(const char *exp)
{
    stack<char> s;
    char output[50];
    int index = 0; // For output array indexing

    for (int i = 0; exp[i] != '\0'; i++)
    {
        char ch = exp[i];

        // If character is an operand, add it to the output
        if (isalpha(ch))
        {
            output[index++] = ch;
        }
        // If character is '(', push it onto the stack
        else if (ch == '(')
        {
            s.push(ch);
        }
        // If character is ')', pop and output from the stack until '(' is found
        else if (ch == ')')
        {
            while (!s.empty() && s.top() != '(')
            {
                output[index++] = s.top();
                s.pop();
            }
            s.pop(); // Remove '(' from the stack
        }
        // If character is an operator
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^')
        {
            while (!s.empty() && precedence(s.top()) >= precedence(ch))
            {
                output[index++] = s.top();
                s.pop();
            }
            s.push(ch); // Push the current operator onto the stack
        }
    }

    // Pop all remaining operators from the stack
    while (!s.empty())
    {
        output[index++] = s.top();
        s.pop();
    }
    output[index] = '\0'; // Null-terminate the string

    // Print the resulting postfix expression
    cout << output << endl;
}

int main()
{
    const char exp[] = "a+b*(c^d-e)^(f+g*h)-i";
    cout << "CONVERTED POSTFIX EXPRESSION = ";
    Postfix(exp);
    return 0;
}
// done
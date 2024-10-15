// AIM - WAP to evalute a postfix expression using stacks.

#include <iostream>
#include <stack>
using namespace std;

// Function to evaluate a given postfix expression
int postfixEval(char exp[]) {
    // Create an empty stack
    stack<int> stack;

    // Traverse the given expression
    for (int i = 0; exp[i] != '\0'; i++) {
        // If the current char is an operand, push it to the stack
        if (exp[i] >= '0' && exp[i] <= '9') {
            stack.push(exp[i] - '0'); // Convert char to int
        } 
        // If the current char is an operator
        else {
            // Pop top two elements from the stack
            int x = stack.top(); stack.pop();
            int y = stack.top(); stack.pop();

            // Evaluate the expression y op x, and push the result back to the stack
            if (exp[i] == '+')
                stack.push(y + x);
            else if (exp[i] == '-')
                stack.push(y - x);
            else if (exp[i] == '*')
                stack.push(y * x);
            else if (exp[i] == '/')
                stack.push(y / x);
        }
    }
    // The stack will have only one element left, the result of the expression
    return stack.top();
}

int main() {
    char exp[20]; // Using the original declaration

    cout << "Enter postfix expression: ";
    cin >> exp;

    // Output the result of the evaluated expression
    cout << postfixEval(exp) << endl;

    return 0;
}

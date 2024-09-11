#include <iostream>
#include <stack>
using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

void infixToPostfix(const string &exp) {
    stack<char> s;
    for (int i = 0; i < exp.length(); i++) {
        char ch = exp[i];
        if (isalpha(ch)) cout << ch;              // Operand
        else if (ch == '(') s.push(ch);           // Left parenthesis
        else if (ch == ')') {                     // Right parenthesis
            while (!s.empty() && s.top() != '(') { 
                cout << s.top(); s.pop(); 
            }
            s.pop();  // Remove '('
        } else if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^') {  // Operator
            while (!s.empty() && precedence(s.top()) >= precedence(ch)) {
                cout << s.top(); s.pop();
            }
            s.push(ch);
        }
    }
    while (!s.empty()) { cout << s.top(); s.pop(); }  // Pop remaining operators
}

int main() {
    string exp;
    cout << "Enter an infix expression: ";
    getline(cin, exp);  // Taking infix expression input from the user

    cout << "Postfix expression: ";
    infixToPostfix(exp);  // Convert and print postfix
    cout << endl;

    return 0;
}

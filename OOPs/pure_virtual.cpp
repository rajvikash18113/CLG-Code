#include <iostream>
using namespace std;

class AbstractBase {
public:
    virtual void display() = 0;  // Pure virtual function
};

class Derived : public AbstractBase {
public:
    // No 'override' keyword here
    void display() override { 
        cout << "Derived class display function." << endl;
    }
};

int main() {
    Derived d;
    d.display(); // Calls Derived's display
    return 0;
}

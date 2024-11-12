#include <iostream>
using namespace std;

class A
{
public:
    void show() { cout << "Class A" << endl; }
};

class B1 :virtual  public A
{ // Virtual inheritance
public:
    void show() { cout << "Class B1" << endl; }
};

class B2 : virtual  public A
{ // Virtual inheritance
public:
    void show() { cout << "Class B2" << endl; }
};

class D : public B1, public B2
{
public:
    void show() { cout << "Class D" << endl; } // Override show in D to avoid ambiguity
};

int main()
{
    D obj;
    obj.show(); // This will now call D's show()
    return 0;
}

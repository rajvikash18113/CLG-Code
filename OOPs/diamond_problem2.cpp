#include <iostream>
using namespace std;

class A
{
public:
    void display()
    {
        cout << "A";
    }
};

class B : virtual public A
{
public:
    void display()
    {
        cout << "B" << endl;
    }
};

class C : virtual public A
{
public:
    void display()
    {
        cout << "C" << endl;
    }
};

class D : public B, public C
{
public:
    void display()
    {
        cout << "D" << endl;
    }
};

int main()
{
    B obj;
   // obj.display(); // Now calls A's display method
    return 0;
}

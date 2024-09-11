// Write a program to demonstrate the use of dynamic constructor.

#include <iostream>
using namespace std;
class test
{
private:
    int *p;

public:
    test(int a1)
    {
        p = new int;
        *p = a1;
    }
    void display()
    {
        cout << *p;
    }
    ~test()
    {
        delete p; // Clean up the dynamically allocated memory
    }
};
int main()
{
    test t1(10);
    t1.display();
    return 0;
}
#include<iostream>
using namespace std;
class Base
{
    public:
    void fun1()
    {
        cout << "Base1";
    }
    virtual void fun2()
    {
        cout << "Base2";
    }
    virtual void fun3()
    {
        cout << "Base3";
    }
    virtual void fun4()
    {
        cout << "Base4";
    }
};
class Derived:public Base
{
    void fun1()
    {
        cout << "Derived1";
    }
     void fun2()
    {
        cout << "Derived2";
    }
     void fun4(int x)
    {
        cout << "Derived4";
    }
};
int main()
{
    Base * ptr;
    Derived d1;
    ptr = &d1;
    ptr -> fun1();
    cout << endl;
    ptr -> fun2();
    cout << endl;
    ptr -> fun3();
    cout << endl;
    ptr -> fun4();

    // done here
}
#include<iostream>
using namespace std;
class base{
    public:
    void fun1()
    {
        cout << "base1" << endl;
    }
    virtual void fun2()
    {
        cout << "base2" << endl;
    }
    virtual void fun3()
    {
        cout << "base3" << endl;
    }
    virtual void fun4()
    {
        cout << "base4" << endl;
    }
};
class derived : public base{
    public:
    void fun1()
    {
        cout << "derived1" << endl;
    }
    void fun2()
    {
        cout << "derived2" << endl;
    }
    void fun4()
    {
        cout << "derived4" << endl;
    }
};
int main()
{
    base*p;
    derived obj;
    p = &obj;
    p->fun1();
    p->fun2();
    p->fun3();
    p->fun4();
    return 0;
}
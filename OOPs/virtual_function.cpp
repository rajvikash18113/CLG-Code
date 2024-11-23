#include<iostream>
using namespace std;
class base
{
    public:
    virtual void display() = 0;
};
class derived : public base
{
    public:
    void display()
    {
        cout << "Derived class display function" << endl;
    }
};
int main ()
{
    derived obj;
    obj.display();
    return 0;
}






// #include<iostream>
// class AbstractBase {
// public:
//  virtual void display() = 0; // Pure virtual function
// };
// class ConcreteDerived : public AbstractBase {
// public:
//  void display() {
//  std::cout << "ConcreteDerived class display function." << std::endl;
//  }
// };
// int main()
// {
// ConcreteDerived d1;
// d1. display();
// return 0;
// }
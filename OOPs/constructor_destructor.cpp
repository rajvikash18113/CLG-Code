#include<iostream>
using namespace std;
class Animal
{
    public:
    Animal()
    {
        cout << "Animal Class Constructor Called" << endl;
    }
    ~Animal()
    {
        cout << "Animal Class Destructor Called" << endl;
    }
};

class Dog : public Animal
{
    public:
    Dog()
    {
        cout << "Dog class Constructor Called" << endl;
    }
    ~Dog()
    {
        cout << "Dog class Destructor Called" << endl;
    }
};
int main()
{
    Dog obj;
    return 0;
}
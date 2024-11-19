#include <iostream>
using namespace std;


class AbstractBase
{
public:
    virtual void display() = 0;  // if virtual function == 0 thrn it is pure virtual function 
};

// class that contains pure virtual function is known as abstract class
class ConcreteDrive : public AbstractBase
{
public:
    void display() override
    {
        cout << "display" << endl;
    }
};

int main()
{
    ConcreteDrive d1;
    d1.display();  
    return 0;
}
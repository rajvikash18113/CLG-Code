#include<iostream>
using namespace std;

class outside
{
    int x,y,z;
    public:
    void get();
    void sum();
    void display();    
};

void outside::get()
{
    cout << "Enter 1st number -> " ;
    cin >> x;
    cout << "Enter 2nd Number -> " ;
    cin >> y;
}

void outside::sum()
{
    z = x + y;
}

void outside::display()
{
    cout << "Sum of both numbers is -> " << z << endl;
}

int main()
{
    outside p;
    p.get();
    p.sum();
    p.display();
    return 0;
}
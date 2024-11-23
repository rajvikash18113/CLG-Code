#include<iostream>
using namespace std;
class vehicle
{
    public:
    vehicle()
    {
        cout << "This is Vehicle" << endl;
    }
};
class car : public vehicle
{
    public:
    car()
    {
        cout << "This Vehicle is a car" << endl;
    }
};

int main()
{
    car obj;
    return 0;
}
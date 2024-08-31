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
class carColor : public car
{
    public:
    carColor()
    {
        cout << "This car is Red" << endl;
    }
};

int main()
{
    car obj1;
    carColor obj2;
    return 0;
}
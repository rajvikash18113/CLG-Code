#include<iostream>
using namespace std;
class car
{
    public:
    car()
    {
        cout << "This is a car" << endl;
    }
};
class carColor
{
    public:
    carColor()
    {
        cout << "the car is Red" << endl;
    }
};

class fourWheeler : public car, public carColor
{
    public:
    fourWheeler()
    {
        cout << "the car has 4 wheel" << endl;
    }
};

int main()

{
    fourWheeler obj;
    return 0;
}

#include <iostream>
using namespace std;
class A
{
private:
    int a, b;

public:
    A(int x, int y)
    {
        a = x;
        b = y;
        cout << "The values of a and b are: " << endl;
        cout << a << endl;
        cout << b << endl;
    }
    void sum()
    {
        cout << "sum is=" << a + b;
    }
};
int main()
{
    A a1(20, 30);
    cout << endl;
    a1.sum();
    return 0;
}

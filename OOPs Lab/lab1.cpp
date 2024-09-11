#include <iostream>
using namespace std;

class Add
{
    private:
        int a, b, c;
    public:
        void sum ()
        {
            cout << "Enter the 1st Number -> ";
            cin >> a;

            cout << "Enter the 2nd Number -> ";
            cin >> b;

            c = a + b;

            cout << "sum of both Numbers is -> " << c << endl;
        }    
};

int main()
{
    Add p;
    p.sum();
    return 0;
}
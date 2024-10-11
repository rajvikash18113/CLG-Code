#include<iostream>
using namespace std;

class Father
{
    protected:
    string surname = "Singh";
};
class son1:public Father
{
    string name = "Abhishek";
    public:
    void show()
    {
        cout << name << " " << surname << endl;
    }
};
class son2:public Father
{
    string name = "Aman";
    public:
    void show()
    {
        cout << name << " " << surname << endl;
    }
};

int main()
{
    son1 s1;
    s1.show();
    son2 s2;
    s2.show();
    return 0;
}
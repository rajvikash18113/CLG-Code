#include<iostream>
using namespace std;

int main()
{
    int a = 20;
    int b = 0;
    try
    {
        if(b == 0)
        {
            throw "Division by Zero Error!";
        }
        int result = a / b;
        cout << "Result" << result << endl;
    }
    catch(const char *e)
    {
        cout << "Exception Occured :"  << e << endl;
    }
    return 0;

}
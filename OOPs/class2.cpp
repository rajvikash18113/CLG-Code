#include<iostream>
using namespace std;


    class shape
    {
        public:
        virtual void calculate()
        {
            cout << "Area of your shape" << endl;

        }
        virtual~shape()
        {
            cout << "destructor shape cal" << endl;
        }
    };

    class rect : public shape
    {
        public:
        int w, h;
        void calculate()
        {
            cout << "Enter w";
            cin >> w;
            cout << "Enter h";
            cin >> h;
            int area = w*h;
            cout << "area of circle" <<area;

        }
        virtual~rect()
        {
            cout << "rect ke andr"<< endl;
        }
    };
    class square : public shape
    {
        public:
        int side, area;
        void calculate()
        {
            cout << "Enter side" << endl;
            cin >> side;
            int area = side*side;
            cout << area;
        }
        virtual~square()
        {
            cout << "destructing square" << endl;
        }
    };

    int main()
    {
        shape *ptr;
        rect r1;
        ptr = &r1;
        ptr -> calculate();

        // square sq;
        // sq.calculate();

        square s1;
        ptr = &s1;
        ptr -> calculate();
    }

    
 
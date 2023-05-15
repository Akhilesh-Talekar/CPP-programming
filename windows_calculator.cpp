/*
simple_calculator -- addition , subtraction , multiplication , division.
scintific_calculator -- square , square root , distance , time of free fall in gravity
*/

#include <iostream>
#include <cmath>
// you have to watch video on different between "cmath & math.h"

using namespace std;

class simple
{
protected:
    float a, b, c;

public:
    simple() {}
    void sum(float x, float y)
    {
        a = x;
        b = y;
        c = a + b;
    }
    void sub(float x, float y)
    {
        a = x;
        b = y;
        c = a - b;
    }
    void mul(float x, float y)
    {
        a = x;
        b = y;
        c = a * b;
    }
    void div(float x, float y)
    {
        a = x;
        b = y;
        c = a / b;
    }
    void result()
    {
        cout << "Ans = " << c;
    }
};

class scintific
{
protected:
    float a, b, c, d, e;

public:
    scintific() {}
    void sq(float x)
    {
        a = x;
        c = pow(a, 2);
    }
    void root(float x)
    {
        a = x;
        c = sqrtf(a);
    }
    void dis(float x1, float y1, float x2, float y2)
    {
        c = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    }
    void free_falll(float x, float y)
    {
        a = x;
        b = y;
        c = sqrtf((2 * a) / b);
    }
    void out()
    {
        cout << "Ans = " << c;
    }
};

class Hibride : public simple, scintific
{
protected:
public:
    Hibride() {}
};

//
//
//
//

int main()
{
    int a;
    float m, n, o, p;
    scintific o1;
    simple x;
    Hibride o2;
    cout << "This is the calculator"
         << endl
         << "Enter 1 for simple calculator\n"
         << "Enter 2 for scintific calculator\n"
         << "Enter 3 for Hibride calculator"
         << endl;
    cin >> a;
    switch (a)
    {
    case 1:
        int z;
        while (z = !0)
        {
            cout << "Enter 1 for sum\n"
                 << "Enter 2 for sub\n"
                 << "Enter 3 for mul\n"
                 << "Enter 4 for div\n"
                 << "Enter 0 for out" << endl;
            cin >> z;
            if (z == 1)
            {
                cout << "Enter the number =";
                cin >> m >> n;
                x.sum(m, n);
            }
            else if (z == 2)
            {
                cout << "Enter the number =";
                cin >> m >> n;
                x.sub(m, n);
            }
            else if (z == 3)
            {
                cout << "Enter the number =";
                cin >> m >> n;
                x.mul(m, n);
            }
            else if (z == 4)
            {
                cout << "Enter the number =";
                cin >> m >> n;
                x.div(m, n);
            }
            else if (z == 0)
            {
                break;
            }
            cout << "\n"
                 << endl;
        }
        break;
    case 2:
        int Q;
        while (Q = !0)
        {
            cout << "Enter 1 for square\n"
                 << "Enter 2 for square root\n"
                 << "Enter 3 for distance\n"
                 << "Enter 4 for time of free fall\n"
                 << "Enter 0 for out" << endl;
            cin >> Q;
            if (Q == 1)
            {
                cout << "Enter the number =";
                cin >> m;
                o1.sq(m);
                o1.out();
            }
            else if (Q == 2)
            {
                cout << "Enter the number =";
                cin >> m;
                o1.root(m);
                o1.out();
            }
            else if (Q == 3)
            {
                cout << "X1,Y1 =";
                cin >> m >> n;
                cout << "X2,Y2 =";
                cin >> o >> p;
                o1.dis(m, n, o, p);
                o1.out();
            }
            else if (Q == 4)
            {
                cout << "Enter hight of object =";
                cin >> m;
                cout << "Enter constant acceleration =";
                cin >> n;
                o1.free_falll(m, n);
                o1.out();
            }
            else if (Q == 0)
            {
                break;
            }
            cout << "\n"
                 << endl;
        }
        break;
    case 3:

        int Z;
        while (Z = !0)
        {
            cout << "Enter 1 for sum\n"
                 << "Enter 2 for sub\n"
                 << "Enter 3 for mul\n"
                 << "Enter 4 for div\n"
                 << "Enter 5 for square\n"
                 << "Enter 6 for square root\n"
                 << "Enter 7 for distance\n"
                 << "Enter 8 for time of free fall\n"
                 << "Enter 0 for out" << endl;
            cin >> Z;
            if (Z == 1)
            {
                cout << "Enter the number =";
                cin >> m >> n;
                o2.sum(m, n);
            }
            else if (Z == 2)
            {
                cout << "Enter the number =";
                cin >> m >> n;
                x.sub(m, n);
            }
            else if (Z == 3)
            {
                cout << "Enter the number =";
                cin >> m >> n;
                x.mul(m, n);
            }
            else if (Z == 4)
            {
                cout << "Enter the number =";
                cin >> m >> n;
                x.div(m, n);
            }
            else if (Z == 5)
            {
                cout << "Enter the number =";
                cin >> m;
                o1.sq(m);
                o1.out();
            }
            else if (Z == 6)
            {
                cout << "Enter the number =";
                cin >> m;
                o1.root(m);
                o1.out();
            }
            else if (Z == 7)
            {
                cout << "X1,Y1 =";
                cin >> m >> n;
                cout << "X2,Y2 =";
                cin >> o >> p;
                o1.dis(m, n, o, p);
                o1.out();
            }
            else if (Z == 8)
            {
                cout << "Enter hight of object =";
                cin >> m;
                cout << "Enter constant acceleration =";
                cin >> n;
                o1.free_falll(m, n);
                o1.out();
            }
            else if (Z == 0)
            {
                break;
            }
            cout << "\n"
                 << endl;
        }

        break;
    }
    return 0;
}

/*



*/
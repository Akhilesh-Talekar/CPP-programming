#include <iostream>
using namespace std;

class Dis
{
private:
    int a, b;

public:
    void showdata()
    {
        cout << "complex number is : " << a << " + " << b << "i" << endl;
    }

    Dis()
    {
        a = 0;
        b = 0;
    }
    Dis(int x, int y)
    {
        a = x;
        b = y;
    }
    Dis(int x)
    {
        a = x;
        b = 0;
    }
};

int main()
{
    int x, y;
    cin >> x >> y;

    // Dis c1;
    // c1.showdata();

    // Dis c2(x,y);
    // c2.showdata();

    Dis c3(x);
    c3.showdata();
    return 0;
}
#include <iostream>
using namespace std;

class complex
{
private:
    int a, b;

public:
    complex(int x, int y = 9)
    {
        a = x;
        b = y;
    }
    void showdata()
    {
        cout << "The value of a is : " << a << "\n"
             << "The value of b is : " << b << endl;
    }
};

int main()
{
    int x, y;
    cin >> x >> y;
    complex c1(x);
    c1.showdata();
    return 0;
}
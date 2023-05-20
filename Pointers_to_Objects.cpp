#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    Complex() {}
    void getData()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{
    Complex c1;
    Complex *ptr = &c1;
    Complex *ptr = new Complex; 
    // (*ptr).setData(2,3); //
    // (*ptr).getData(); // () is used because presedence of . oprator is higher than * oprator 
    ptr->setData(2,3);
    ptr->getData();
    return 0;
}
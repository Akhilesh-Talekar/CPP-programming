#include <iostream>
using namespace std;
class B;
class A
{
private:
    int data1;

public:
    void setdata(int value1) { data1 = value1; }
    int show(){return data1;}
    friend void fun(A &o1,B &o2);
};

class B
{
private:
    int data2;

public:
    void setdata(int value2) { data2 = value2; }
    int show(){return data2;}
    friend void fun(A &o1,B &o2);
};

void fun(A &o1,B &o2)
{
    int temp= o1.data1;
        o1.data1=o2.data2;
        o2.data2=temp;

}
int main()
{
    A o1;
    B o2;
    o1.setdata(50);
    o2.setdata(100);
    fun(o1,o2);
    cout<<"After swapping the numbers : "<<endl<<o1.show()<<endl<<o2.show()<<endl;
}
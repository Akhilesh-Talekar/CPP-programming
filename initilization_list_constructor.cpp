#include <iostream>
using namespace std;

/*
Syntac for initialization list in cinstructor:

constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/
class Test
{
    int a;
    int b;
    public:
                 //All cases for initilization //
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i+j)
    // Test(int i, int j) : a(i), b(2*j)
    // Test(int i, int j) : a(i), b(a + j)
    Test(int i, int j) : a(i), b(a+j)
    // Test(int i, int j) : b(i), a(b + j)  //This line gives error because (a) is initilized first and after (b) is initilized
      {
         cout<<"constructor executed"<<endl;
         cout<<"The value of a is : "<<a<<endl;
         cout<<"The value of b is : "<<b<<endl;

      }
};

int main()
{
    Test t(1,2);
    return 0;
}
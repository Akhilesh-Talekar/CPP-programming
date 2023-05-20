/*
Variables ==
Built in Data types {
int - for integers
float - for dicimal number
char - for charecter
double - for more numbers after .
boolean - true or flase }

user defined Data types {
struct
union
enum
}

Derived Data Types {
Attay
Function
Pointer
}


Data_type Variable_name = Value;

Scope - scope of a variable is the region in code where the existence of variable is valid.
global and local variable have same name in c++

*/

#include <iostream>
using namespace std;

void sum(int a, float b)
{
    float c;
    c = a + b;
    cout << "sum is \t" << c;
}
int main()
{
    int a = 2;
    float b = 2.234;
    // we use <<endl for new line
    cout << "The value of a is " << a << "\nThe value of b is " << b << endl;
    sum(a, b);
    return 0;
}
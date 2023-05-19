#include <iostream>
using namespace std;
 
int main()
{
    cout<<"The result is the not that good:";
    
    float d=34.4f;
    long double e=34.4l;
    cout<<"The value of d is  "<<d<<endl<<"The value of e is "<<e<<endl;
    // if only 34.4 is passed then it passed as double and if 34.4f is passed then it pass as float;
    
    // ********reference Variables**********
    // Rohan Das----> Monty ----> Rohu -----> Dangerous coder
    float x = 455;
    float & y = x;
    cout<<x<<endl;
    cout<<y<<endl;

    // **********Typecasting************
    // Typecasting is the way to change the datatype is variable
    float a=34.4;
    cout<<"The integer of a is: "<<(int)a;
}
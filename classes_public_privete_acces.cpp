#include <iostream>
using namespace std;

class student
{
private:
    //we can not access data in this private part in calss from main() funtion
    //this will be used in verious codeing and security codeing
    int a, b, c,f;
public:
    //it's public data and used in main() function  
    int d,e;
    void setData(int a1,int b1,int c1); // Declaration of function
    void getData(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }
};

//  writeing the function
void student :: setData(int a1,int b1,int c1){
    // setData is only function name and non other
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    student Aditya;
    
    // we can give the value of public part variables but not for private
    Aditya.d=10;
    Aditya.e=20;
    // Aditya.f=30; // this is private variable
    Aditya.setData(2,3,4);
    Aditya.getData();
    return 0;
}
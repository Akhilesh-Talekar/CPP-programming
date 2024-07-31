#include <iostream>
using namespace std;

// Aditya in 

int main()
{
    // what is a pointer? ---> data type which holds the address
    // of other data types
    
    int a=4;
    int* ptr = &a;

    // & is the address operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The affress of a is "<<ptr<<"\n"<<endl;

    // * is the dereference opretor
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of a is "<<*ptr<<"\n"<<endl;
   
    // pointer to the pointer
    int** c= &ptr;
    cout<<"The address of ptr is "<<&ptr<<endl;
    cout<<"The address of ptr is "<<c<<"\n"<<endl;
    cout<<"The value of a is "<<**c<<endl;

}

#include <iostream>
using namespace std;

int main()
{
    // Basic Example
    int a = 4;
    int* ptr = &a;
    cout<<"The value of a is "<<*(ptr)<<endl;

    // new operator
    // int *p = new int (40);
    float *p = new float(40.78);
    cout << "The value at address p is " << *(p) << endl;

    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    
    //delete operator 
    delete[] arr; // This syntax delete the dynamicali allocated block of the memory
    cout<< "The value of arr[0] is " << arr[0] << endl;   
    cout<< "The value of arr[1] is " << &arr[1] << endl;   
    cout<< "The value of arr[2] is " << &arr[2] << endl;  
    cout<< "The value of arr[3] is " << &arr[3] << endl;  

    return 0;
}
#include <iostream>
using namespace std;


// call by address using pointers 
void swap(int *a, int *b)
{   
    int temp=*a;
    *a = *b;
    *b = temp;

}
// simple call by address 
int swaper( int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

// call by value
void num_swaper(int a , int b){
    int temp = a;
    a = b;
    b = temp;
    cout<<"The value of a is "
        <<a
        <<" and The value of b is "
        <<b
        <<endl;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << "The value of a is " << a << " and the value of b is " << b << endl;
    
    // this is the call by address using pointers
    // swap(&a,&b);

    // this is the call by address
    swaper(a,b);

    // this is the call by value
    // num_swaper(a,b);
    cout << "The value of a is " << a << " and the value of b is " << b <<endl;
    
}
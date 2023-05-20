#include <iostream>
using namespace std;

double factorial(int a)
{   int c;
    if (a==1 || a==0 )
    {
        return 1;
    }
    cout<<"gdgsd"<<endl;
    c = a*(factorial(a-1));/********function calls it self here*******/
    return c;
}
int main()
{
    int a;
    double c;
    cout<<"Enter the number = ";
    cin>>a;
    

    c = factorial(a);
    cout<<"The output is "<<c;
}
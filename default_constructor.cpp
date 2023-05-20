#include <iostream>
using namespace std;

class Complex
{
    private:
    int a,b;

    public:
    
    void showdata(void){
        cout<<"Our complex no. is : "<<a<<" + "<<b<<"i"<<endl;
    };
    Complex(int , int );
};

Complex :: Complex(int x, int y){
    cout<<"Initilising value of a and b"<<endl;
    cin>>x>>y;
    a = x;
    b = y;

}

int main()
{
   cout<<"We are learning the class and objects "<<endl;
//    Complex x(0,0);
//    x.showdata();
      Complex b = Complex(0,0);   //-------(other method to call it)
      b.showdata();
}
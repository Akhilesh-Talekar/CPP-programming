#include <iostream>
using namespace std;

class Base
{
private:
    int a = 10;

protected:
    int b = 20;
};

class Derive : public Base
{
public:
    void print()
    {
        //    cout<<"The value of the a is "<<a<<endl; //This show the error cause a is private so we can inheritate it
        cout << "The value of the b is " << b << endl; // we can inheritate the protected members but not access as private
    }
};

int main()
{
    Base o;
    // cout<<"The value of the b is "<<o.b<<endl; //This show error b is protected
    Derive o1;
    o1.print();
    // cout<<o.b<<endl; //error cause b is protected
    return 0;
}

// Note :
/*
For a protected member:
                      Public Derivation   Private Derivation   Protected Derivation
1. Private members     Not Inherited       Not Inherited        Not Inherited
2. Protected members   Protected           Private              Protected
3. Public members      Public              Private              Protected



*/
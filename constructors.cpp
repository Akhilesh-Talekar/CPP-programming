// ********constructor***************
#include <iostream>
using namespace std;

class complex{
    private: int a,b;
    public:
    // creating a constructor
    // Constructor is a special member function with the same name as of the 
    // class. It is automatically invoked
    // It is used to initialize the objects of its class

    complex(void);
    void printnum(){
        cout<<"yout number is "<< a <<" + "<< b <<"i"<<endl;
    }
};

complex :: complex(void){
    a=10;
    b=0;
}

int main(){

    complex c;
    c.printnum();

    return 0;
}


// *******properties of constructors ********
// 1.constructors is always defined in public sector of class
// 2.They are automatically invoked whenver the object is created
// 3.They cannot return values and do not have return types
// 4.It can have default arguments
// 5.We can not refer to their address
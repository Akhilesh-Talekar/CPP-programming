#include <iostream>
using namespace std;

// *******Destructor never takes an argument nor does it return any value*******
int count = 0 ;
class Num
{
    
  public:
    Num(){
        count++;
        cout<<"This is the time when constructor is called for object number"<<count <<endl;
    }
    ~Num(){
        cout<<"This is the time when destru is called for object number"<<count<<endl;
        count--;
    }
};

int main()
{   
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    Num n1;
    {
        cout<<"Entering this Block"<<endl<<"Breating two more objects"<<endl;
        Num n2 ,n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"We are inside our main function back "<<endl;
    

    return 0 ;
}
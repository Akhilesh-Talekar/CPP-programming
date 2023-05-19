// #include <iostream>
// using namespace std;

// class Employee
// {

// public:
//     int id;
//     float salary;
//     Employee() {}
//     Employee(int inpID)
//     {
//         id = inpID;
//         salary = 100;
//     }
// };

// Derived class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
*/

// creating a programmer class derived from emplyee base class
// class Programmer : Employee
// {
// public:
//     Programmer(int inpid)
//     {
//         id = inpid;
//     }
//     int languageCode = 9;
// };
// int main()
// {
//     Employee harry(1), rohan(2);
//     cout << harry.salary << endl;
//     cout << rohan.salary << endl;
//     Programmer skillF(1);
//     cout << skillF.languageCode;
//     return 0;
// }

// Note:
/*
1.Default visibility mode is private
2.Public visibility mode: Public members of the base class becomes public members of the derived class
3.Private visibility mode: Public members of the base class becomes private members of the derived class
4.Private members are never inherited
*/

// this code may be confusing so you can watch the video no.37 for revision




/*
#include <iostream>
using namespace std;

class Base
{
    int data1; // private by default and is not inheritable
public:
    int data2;
    void setData()
    {
        data1 = 20;
        data2 = 30;
    }
    int getData1()
    {
        return data1;
    }
    int getData2()
    {
        return data2;
    }
};

class Derived : public Base
{
    int data3;

public:
    void process() { data3 = data2 * getData1(); }
    void display()
    {
        cout << "The value of data1 is " << getData1() << endl;
        cout << "The value of data2 is " << data2 << endl;
        cout << "The value of data3 is " << data3 << endl;
    }
};

int main()
{
    Derived der;
    der.setData();
    der.process();
    der.display();
    return 0;
}
*/




//                     ************When Derived class is private************

/*
#include <iostream>
using namespace std;

class Base
{
    int data1; // private by default and is not inheritable
public:
    int data2;
    void setData()
    {
        data1 = 20;
        data2 = 30;
    }
    int getData1()
    {
        return data1;
    }
    int getData2()
    {
        return data2;
    }
};

class Derived : private Base
{
    int data3;

public:
    void process()
    {
        setData();
        data3 = data2 * getData1();
    }
    void display()
    {
        cout << "The value of data1 is " << getData1() << endl;
        cout << "The value of data2 is " << data2 << endl;
        cout << "The value of data3 is " << data3 << endl;
    }
};

int main()
{
    Derived der;
    // der.setData(); error at this line
    der.process();
    der.display();
    return 0;
}

*/




//                     *******multiplelevel inheritance************
/*


#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int r)
    {
        roll_number = r;
    }
    void get_roll_number()
    {
        cout << "The roll number is " << roll_number << endl;
    }
};

class Exam : public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void get_marks()
    {
        cout << "The marks obtained in maths are: " << maths << endl;
        cout << "The marks obtained in physics are: " << physics << endl;
    }
};

class Result : public Exam
{
    float percentage;

public:
    void display()
    {
        get_roll_number();
        get_marks();
        cout << "Your percentage is " << (maths + physics) / 2 << endl;
    }
};

int main()
{
    Result Aditya;
    Aditya.set_roll_number(44);
    Aditya.set_marks(95.75 , 95.25);
    Aditya.display();
    return 0;
}


*/



//                         **********multipal inheritance*************



#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int r)
    {
        roll_number = r;
    }
    void get_roll_number()
    {
        cout << "The roll number is " << roll_number << endl;
    }
};

class Exam
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void get_marks()
    {
        cout << "The marks obtained in maths are: " << maths << endl;
        cout << "The marks obtained in physics are: " << physics << endl;
    }
};

                //    here only change in syntax in multipl inheritance and multilevel inheritance
                     /*
                     class (class name) : (visibility mode) (name of inherited class) , (name of second inherited class)
                      {

                      };
                      */


class Result : public Student, public Exam
{
    float percentage;

public:
    void display()
    {
        get_roll_number();
        get_marks();
        cout << "Your percentage is " << (maths + physics) / 2 << endl;
    }
};

int main()
{
    Result Aditya;
    Aditya.set_roll_number(44);
    Aditya.set_marks(95.75 , 95.25);
    Aditya.display();
    return 0;
}




//       *******Ambiguti resolution******
/*
if there is two class A and B , YYY function is in both class
Now we are drive the class C inherited with A and B ,
and after making object of class C and calling the function YYY 
there is error know as Ambiguti .
   
        for solving this we specify the YYY function in C like blow
          
        void YYY ()
        {
             A :: YYY();
        }

        and if you want to use YYY function from class B then

        void YYY ()
        {
             B :: YYY():
        }
*/
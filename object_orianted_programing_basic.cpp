#include <string>
#include <iostream>
using namespace std;

class binary
{
private:
        string s;

public:
        void getdata(void);
        void chk_num();
};

void binary ::getdata(void)
{
        cout << "Enter the number :" << endl;
        cin >> s;
}

void binary :: chk_num(void){
        for (int i = 0; i < s.length() ; i++)
        {
               if (s.at(i)!='0' && s.at(i)!='1')
               {
                    cout<<"Enter number is not binary"<<endl;
                    exit(0);
               }
               else{
                    
                    if (s.at(i)=='0')
                    {
                        s.at(i)='1';
                    }
                    else{
                        s.at(i)='0';
                    }
                    
               }
               
        }
        cout<<s<<endl;
        
}

int main()
{
        // OOPS - Classes and objects
        // class --> extension of structures (in c)
        // structures had limitions like
        //         -all members are public
        //         -no methods
        // classes --> structures + more + can have methods and properties
        // classes --> it contains private and public
        // structures in C++ are typedefed
        // you can also declare objects along with the class declarion like this:
        /* class Student{
                //  Class definition
           }Aditya,Gitajali,Rushya;
        */
       binary num ;
       num.getdata();
       num.chk_num();
}
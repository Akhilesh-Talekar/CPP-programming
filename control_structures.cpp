// ********control structures*********

// 1) sequence structure --- one flow
// 2) selection structure --- continue flow but have branches
// 3) loop structure --- it contains loop and other conditional setement

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "What is your age ?" << endl;
    cin >> age;
    if (age < 18 || age==18)
    {
        cout << "You can not get voter id"
             << "you can apply after " << 18 - age<<" year"<<endl;
    }
    else
    {
        cout << "You can get voter id"<<endl;
    }
    
    switch (age)
    {
    case 18:
        cout<<"Your are 18 years old"<<endl;
        break;
    case 0:
        cout<<"You are not born yet";
    default:
        break;
    }
}
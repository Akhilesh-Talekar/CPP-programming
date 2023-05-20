#include <iostream>
using namespace std;

int main()
{

    // Example of array with user in put
    int marks[5] = {47, 38, 30, 48, 73};
    // int score[] = {};
    // cin >> score[0] >> score[1] >> score[2];
    // cout << score[0] << "\n"
    //      << score[1] << "\n"
    //      << score[2] << "\n"
    //      << endl;

    // // we can change the value element in array
    // score[0] = 20;

    // cout << score[0] << "\n"
    //      << score[1] << "\n"
    //      << score[2] << "\n"
    //      << endl;
    // cout<<"\nFirst marks is: "<<marks[0]<<"\nsecond marks is: "<<marks[1]<<"\nthrid marks is :"<<marks[2]<<endl;
    int* ptr = marks;
    cout<<*ptr<<endl;
    cout<<*(ptr+1)<<"\n"<<endl;

    cout<<*(ptr++)<<endl;
    cout<<*(++ptr)<<endl;

    return 0;
}
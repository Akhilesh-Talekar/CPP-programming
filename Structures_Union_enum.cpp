#include <iostream>
using namespace std;

struct data
{
    int id;
    char name[10];
    float salary;
};

union info
{
    int id;
    int aadhar;
    int pan;
};


int main(){
    int a,b;
    
// **********Structure************
    struct data m;
    cout<<"Enter the you id"<<endl;
    cin>>m.id;
    cout<<"now you have to enter the name"<<endl;
    cin>>m.name;
    cout<<"now you have to enter the salary"<<endl;
    cin>>m.salary;
    cout<<"your id is :"<<m.id<<endl;
    cout<<"your name is :"<<m.name<<endl;
    cout<<"your current salary is :"<<m.salary<<endl;

// **********Union****************
// union is as same as sturcture but we can acesses the only one 
// data type in union
    union info n;
    cout<<"you have to choose what"<<"\n1 for id\n2 for aadhar\n3 for PAN"<<endl;
    cin>>a;
    switch (a)
    {
    case 1:
        cout<<"you choosed to enter the college id"<<endl;
        b=n.id;
        break;
    case 2:
        cout<<"you choosed to enter the aadhar number"<<endl;
        b=n.aadhar;
        break;
    case 3:
        cout<<"you choosed to enter the PAN number"<<endl;
        b=n.pan;
        break;
    default:
        break;
    }
    cin>>b;
    cout<<b;
// ******Enum*********
// basically it used to make the code easy to read ;
   enum meal { breakfast, lunch, dinner};
   cout<<breakfast<<endl;
   cout<<lunch<<endl;
   cout<<dinner<<endl;
    
    
    
}
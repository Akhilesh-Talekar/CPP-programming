#include <iostream>
using namespace std;

class Employee{
    int id;
    static int count; //defult value is 0
    public:
       void setData(void){
        cout<<"Enter the id"<<endl;
        cin>>id;
       }
       void getData(void){
        cout<<"employee id is :"<<id<<endl;
        cout<<"employee no. is :"<<count<<endl;
        count++;
       }
}; 

int Employee :: count=1;
int main(){
    Employee harry;
    // harry.id=1;
    // harry.count=1; //cannot do this as id and count as private
    
    harry.setData();
    harry.getData();

    harry.setData();
    harry.getData();

    harry.setData();
    harry.getData();
}
#include <iostream>
using namespace std;

class Employee{
      int id;
      int salary;
      public:
          void setId(void){
            cout<<"Enter the id of employee"<<endl;
            cin>>id;
          }
          // void setsal(void){
          //   cout<<"Enter the salary of employee"<<endl;
          //   cin>>salary;
          // }
          void getId(void){
            cout<<"The id of this employee is "<<id<<endl;
          }
          // void getsal(void){
          //   cout<<"The salary of the employee is "<<salary<<endl;
          // }
};

int main(){

   /* Employee Harry, Aditya, Gitanjali;
    Harry.getId();
    Harry.setId();     //This methode is useful for few employees but not for thousand's
   */
   Employee fb[3];
   for (int i = 0; i < 3 ; i++)
   {   
    
    fb[i].setId();
    fb[i].getId();
    // if (i==1)
    // {
    //   fb[i].setsal();
    // }
   }

  //  fb[1].getId();
  //  fb[1].getsal();

    return 0;
}
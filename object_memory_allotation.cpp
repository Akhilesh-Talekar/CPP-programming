
/**************This is the code for shop to enter the id and price of the items*****************/

#include <iostream>
using namespace std;

class Shop{
    int itemID[100];
    int itemPrice[100];
    int counter;
    // all defult in class is private //
    public:
    int initCounter(void){ counter = 0;} // we can write this function outside the class 
    void setprice(void);
    void displayprice(void);

};

void Shop :: setprice(void){
    cout<<"Enter the ID of your item no "<< counter +1<<endl;
    cin>>itemID[counter];
    cout<<"Enter the Price of your item "<<endl;
    cin>> itemPrice[counter];
    counter++;
}

void Shop :: displayprice (void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The Price of item with ID "<<itemID[i]<<" is "<<itemPrice[i]<<endl;
    }
    
}

int main(){
   
    Shop Mall;
    Mall.initCounter();
    Mall.setprice();
    Mall.setprice();
    Mall.setprice();
    Mall.displayprice();

    return 0;
}

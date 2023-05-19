#include<iostream>
using namespace std;

int main(){
    double a,b;
    cin>>a>>b;
    for (int i = a; i < b; i++)
    {
        cout<<i<<endl;
        if (i==5)
        {
            cout<<"value of i is "<<i<<endl;
            // break;
            // continue;
        }
        cout<<"Hello guys"<<endl;
    }
    
    return 0;
}
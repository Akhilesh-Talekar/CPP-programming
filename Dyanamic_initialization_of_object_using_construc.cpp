#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit(){};
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);
    void showValue();
};

BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < years; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}
BankDeposit ::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principal;
    for (int i = 0; i < years; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}
void BankDeposit ::showValue()
{
    cout << endl
         << "Principal amount was " << principal << endl
         << ". Return value after " << years
         << " is " << returnValue <<"\n"<< endl;
}
int main()
{
    BankDeposit bd1, bd2 ,bd3;
    int p,y;
    float r;
    int R;

    cout<<"Enter the value of p , y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = BankDeposit(p, y, r);
    bd1.showValue();

    cout<<"Enter the value of p , y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = BankDeposit(p, y, R);
    bd2.showValue();
    return 0;
}
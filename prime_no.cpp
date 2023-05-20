#include <iostream>
using namespace std;

int main()
{
    int a, count = 0;
    cout << "Enter the number" << endl;
    cin >> a;
    if (a == 1 || a == 0)
    {
        cout << "Number is not prime" << endl;
    }
    else
    {

        for (int i = 2; i <= a; i++)
        {
            if (a % i == 0)
            {
                count++;
            }
        }
        if (count >= 2)
        {
            cout << "Number is not prime" << endl;
        }
        else
        {
            cout << "Number is prime" << endl;
        }
    }
}
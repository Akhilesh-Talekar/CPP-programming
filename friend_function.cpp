// #include <iostream>
// using namespace std;

// class sum{
//     int a ,b;
//     public:
//     void setData(int x,int y){
//         a=x;
//         b=y;
//     }
//     void showData(){
//         cout<<"The a = "<<a<<endl<<"The b = "<<b<<endl;
//     }
//     friend void fun(sum);

// };

// void fun(sum c){
//   cout<<"Sum is : "<<c.a+c.b<<endl;
// }

// int main(){
//     int s,d;
//     cin>>s>>d;
//     sum c1 ,c2;
//     c1.setData(s,d);
//     c1.showData();
//     fun(c1);

//     return 0;
// }

// *******************Use one friend to many classes**************
#include <iostream>
using namespace std;

// ****forword decleration***
class A;

class B
{
private:
    int b;

public:
    void get(int y)
    {
        b = y;
    }
    // friend void fun(A,B);
    int showdata(A, A);
};

class A
{
private:
    int a;

public:
    friend int B::showdata(A, A);
    void get(int x)
    {
        a = x;
    }
    // friend void fun(A,B);
};

int B::showdata(A o1, A o2)
{
    return o1.a + o2.a;
}
// void fun(A o1,B o2)
// {
//     cout<<"The sum is : "<<o1.a+o2.b<<endl;
// }
int main()
{
    int x, y;
    cin >> x >> y;
    A c1, c3;
    B c2;
    c1.get(x);
    c3.get(y);
    // c2.get(y);
    int sum = c2.showdata(c1, c3);
    cout << "The sum is : " << sum << endl;
    // fun(c1,c2);
    return 0;
}
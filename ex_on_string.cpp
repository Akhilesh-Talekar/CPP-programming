#include <iostream>
#include <string>
using namespace std;

int main() {

    string a="";
    string b="";
    char x;

    cin>>a;
    cin>>b;
    int c=a.size();
    int d=b.size();

    cout<<c<<" "<<d<<endl;
    cout<<a+b<<endl;

    x=a[0];
    a[0]=b[0];
    b[0]=x;
    cout<<a<<" "<<b<<endl;

    return 0;
}
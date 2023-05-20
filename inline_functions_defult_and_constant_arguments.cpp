#include <iostream>
using namespace std;

// inline function is used to comprace the function at compaile time without copying the arguments
// we have to make the simple and small code only because when big code inlined then cache memory when out to limites and program take much actual memory
inline int func(int a,int b){
    return a*b;
}

int main(){
    int a,b;
    cout<<"Enter the two numbers :"<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is :"<<func(a,b)<<endl;
    cout<<"The product of a and b is :"<<func(a,b)<<endl;
    cout<<"The product of a and b is :"<<func(a,b)<<endl;
    cout<<"The product of a and b is :"<<func(a,b)<<endl;
    cout<<"The product of a and b is :"<<func(a,b)<<endl;
    cout<<"The product of a and b is :"<<func(a,b)<<endl;
    cout<<"The product of a and b is :"<<func(a,b)<<endl;
    return 0;
}
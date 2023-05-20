#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;  
    cin>>n;
    int x[n]={};
    for (int i = 0; i < n; i++)
    {
        cin>>x[i];
    }
    // cout<<x[0];
    // cout<<x[1];
    // cout<<x[2]<<endl;
    // x[n]={1,2,3} 

    for (int j = 0; j < n; j++)
    {
        cout<<x[(n-1)-j];
    }
    

    return 0;
}
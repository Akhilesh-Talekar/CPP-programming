#include <iostream>
#include <math.h>
using namespace std;

class Distance
{
    int w, x, y, z;

public:
    Distance(int, int, int, int);
    friend float dis(Distance);
};

float dis(Distance g)
{
    float n=sqrt(((g.w-g.y)*(g.w-g.y) + (g.x-g.z)*(g.x-g.z)));
    cout<<"distance bet points is = "<<n<<endl;
}

Distance ::Distance(int a, int b, int c, int d)
{
    w = a;
    x = b;
    y = c;
    z = d;
}

int main()
{
    int a, b, c, d;
    cout << "We are claculating distance\n"
         << "Enter first point" << endl;
    cin >> a >> b;
    cout << "Enter second point" << endl;
    cin >> c >> d;

    Distance c1 = Distance(a,b,c,d);
    dis(c1);


}
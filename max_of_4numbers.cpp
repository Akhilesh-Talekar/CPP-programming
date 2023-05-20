#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    if (a <= d && b <= d && c <= d)
    {
        return d;
    }
    else if (a <= c && b <= c && d <= c)
    {
        return c;
    }
    else if (a <= b && c <= b && d <= b)
    {
        return b;
    }
    else
    {
        return a;
    }
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
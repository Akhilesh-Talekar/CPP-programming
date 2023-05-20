#include <stdio.h>
#include <iostream>
using namespace std;

void update(int *a,int *b) {
    // Complete this function
    int c=int(*a)+int(*b);
    int d=int(*a)-int(*b);
    printf("%d\n",c);
    printf("%d\n",abs(d));

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    // printf("%d\n%d", a, b);
    // abs() is the function which convert number negative to positive 

    return 0;
}
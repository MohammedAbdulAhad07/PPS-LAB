#include<stdio.h>
int main()
{
    int a,b,t;
    a=5;
    b=10;
    printf("Before Swap");
    printf("\na=%d",a);
    printf("\nb=%d",b);

    t=a;
    a=b;
    b=t;

    printf("\n\n\nAfter Swap");
    printf("\na=%d",a);
    printf("\nb=%d",b);
    return 0;
}

#include <stdio.h>
int main ()
{
    int a;
    int b;
    printf("Enter the cost:");
    scanf("%d",&a);
    printf("Enter the selling price:");
    scanf("%d",&b);
    if (a>b)
    {
        printf("Profit");
    }
    else
    {
        printf("Loss");
    }
    return 0;
}

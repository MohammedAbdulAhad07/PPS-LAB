#include <stdio.h>
 int main ()

 {
   float p;
   float t;
   float r;

   printf("Enter period of time :");
   scanf("%f",&t);
   printf("Enter rate of interest :");
   scanf("%f",&r);
   printf("Enter the price:");
   scanf("%f",&p);
   printf("Simple interest:%f",(p*t*r)/100);
   return 0;
 }

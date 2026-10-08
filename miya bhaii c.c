//program for arithmetic operator using switch
#include<stdio.h>
void main()
{int a,b;
char choice;
printf("enter a and b  :\n");
scanf("%d%d",&a,&b);
printf("enter choice like + - */ %%\n");
switch(choice)
{
case'+':
printf("addition= %d",a+b);break;
case'-':
printf("subtraction = %d",a-b);break;
case'*':
printf("multiplaction = %d",a*b);break;
case'/':
if(b!=0)
printf("division = &d",a/b);
else
printf("division by zero is not possible");break;
defultf:
printf("invalid operator");
}
}


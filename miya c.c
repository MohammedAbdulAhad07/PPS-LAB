#include<stdio.h>
void main()
{
int day;
printf("enter day example 1-sunday\n");
scanf("%d",&day);
switch(day)
{
case 1:
printf("sunday");break;
case 2:
printf("monday");break;
case 3:
printf("thuesday");break;
case 4:
printf("wednesday");break;
case 5:
printf("thursday");break;
case 6:
printf("friday");break;
case 7:
printf("saturday");break;
}

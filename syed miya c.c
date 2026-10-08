//program to geneate all prime numbers between 1 n
#include<stdio.h>
void main()
{
int i,j,n,count;
printf("enter n:\n");
scanf("%d",&n);
printf("prime number between 1 and %d are :", n);
for(i=2;i<=n;i++)
{
count=0;
for(j=i;j<=i;j++)
{
if(i%j==0)
  count++;
}
if(count==2)
  {printf("%d\n",i);
  }
}
}


#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i,j,d=0;
clrscr();
printf("enter the intervals");
scanf("%d%d",&a,&b);
printf("prime numbers between two intervals");
for(i=1;i<=b;i++)
{
b=i\2;
for(j=2;j<=b;j++)
{
if(a%j==0)
{
d=1;
break;
}
}
}
if(d==0)
 printf("%d\n",i);
return();
}

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i;
clrscr();
printf("enter the intervals");
scanf("%d%d",&a,&b);
printf("odd numbers between two intervals");
for(i=a+1;i<b;i++)
{
if(i%2!=0)
{
printf("%d/n",i);
}
}
getch();
}

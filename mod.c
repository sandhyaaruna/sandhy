#include<stdio.h>
#include<conio.h>
void main()
{
long int a,b,c,d,e,f,g,h,i,j,k,l;
scanf("%ld%ld",&b,&a);
scanf("%ld%ld",&c,&d);
scanf("%ld%ld",&e,&f);
scanf("%ld%ld",&g,&h);
i=(b/a);
j=(c%d);
k=(e/f);
l=(g%h);
printf("%ld\n",i);
printf("%ld\n",j);
printf("%ld\n",k);
printf("%ld\n",l);
getch();
}

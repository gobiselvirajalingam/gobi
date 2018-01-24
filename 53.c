#include<stdio.h>
int main()
{
int a,c=0,x;
printf("enter the value");
scanf("%d",&a);
while(a>0)
{
a=123%10;
c=c+a;
x=x/10;
}
printf("%d",c);
}

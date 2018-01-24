#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the a and b value");
scanf("%d%d",&a&b);
c=a*b;
if(c%2==0)
{
printf("even %d",c);
}
else
{
printf("odd %d",c);
}
}

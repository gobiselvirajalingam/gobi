#include<stdio.h>
int main(void)
{
int a,c=0,n1;
printf("enter the number:");
scanf("%d",&a);
while(a!=0)
{
n1=a%10;
a=a/10;
c++;
}
printf("count given number is:%d",c);
}

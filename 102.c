#include<stdio.h>
void main()
{
int a;
printf("enter number");
scanf("%d",&a);
if(a%2==0)
{
    a=a/2;
    printf("%d",a);
}
else
{
  printf("%d",a); 
}
}

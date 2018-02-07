#include<stdio.h>
int main()
{
   int a,b,r=1;
   printf("Enter a number:");
   scanf("%d",&a);
   printf("Enter a power:");
   scanf("%d",&b);
   while(b!=0)
   {
       r*=a;
       --b;
   }
   printf("power two%d",r*2);
}   

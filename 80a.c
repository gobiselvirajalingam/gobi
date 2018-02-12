#include<stdio.h> 
int main()
{
int n,rem,odd=0,d;
printf("  Enter an integer number");
scanf("%d",&n);
printf(" The Odd digits present in %d are",n);
while(n>0)
{
d=n%10;
n=n/10;
rem=d%2;
if(rem!=0)
printf("\n  %d.",d);
 }
 }

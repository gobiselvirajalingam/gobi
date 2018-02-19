#include<stdio.h>
void  main()
{
 int n,b=0,n1;
 printf("enter value");
 scanf("%d",&n);
 while(n>0)
{
    n1=n%10;
    b=b*10+n1;
    n=n/10;
}
printf("%d",b);
    
}


#include<stdio.h>
void main()
{ 
    int s=0,n,a,b;
    printf("enter total number of elements");
    scanf("%d",&n);
    printf("enter number");
    scanf("%d",&a);
    while(a!=0)
    {
       b=a%10;
        s=s+b;
      a=a/10;
    
    } 
       printf("%d",s);
    
    }
    
